// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/client.h"
#include "google/cloud/storage/testing/storage_integration_test.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>
#include <algorithm>
#include <string>
#include <vector>

namespace google {
namespace cloud {
namespace storage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

using ::google::cloud::internal::GetEnv;
using ::google::cloud::testing_util::IsOk;
using ::testing::Contains;
using ::testing::IsSupersetOf;

class ObjectReadHeadersIntegrationTest
    : public ::google::cloud::storage::testing::StorageIntegrationTest {
 public:
  ObjectReadHeadersIntegrationTest() = default;

 protected:
  void SetUp() override {
    bucket_name_ =
        GetEnv("GOOGLE_CLOUD_CPP_STORAGE_TEST_BUCKET_NAME").value_or("");

    ASSERT_FALSE(bucket_name_.empty());
  }

  std::string const& bucket_name() const { return bucket_name_; }

 private:
  std::string bucket_name_;
};

TEST_F(ObjectReadHeadersIntegrationTest, CaptureMetadataXml) {
  StatusOr<Client> client = MakeIntegrationTestClient();
  ASSERT_STATUS_OK(client);

  auto const object_name = MakeRandomObjectName();

  auto insert = client->InsertObject(bucket_name(), object_name, LoremIpsum(),
                                     IfGenerationMatch(0));
  ASSERT_THAT(insert, IsOk());
  ScheduleForDelete(*insert);

  auto is = client->ReadObject(bucket_name(), object_name,
                               Generation(insert->generation()));
  EXPECT_EQ(insert->generation(), is.generation().value_or(0));
  EXPECT_EQ(insert->metageneration(), is.metageneration().value_or(0));
  EXPECT_EQ(insert->storage_class(), is.storage_class().value_or(""));
  EXPECT_EQ(insert->size(), is.size().value_or(0));

  auto const actual = std::string{std::istreambuf_iterator<char>(is), {}};
  is.Close();
  EXPECT_THAT(is.status(), IsOk());
}

TEST_F(ObjectReadHeadersIntegrationTest, CaptureMetadataJson) {
  StatusOr<Client> client = MakeIntegrationTestClient();
  ASSERT_STATUS_OK(client);

  auto const object_name = MakeRandomObjectName();

  auto insert = client->InsertObject(bucket_name(), object_name, LoremIpsum(),
                                     IfGenerationMatch(0));
  ASSERT_THAT(insert, IsOk());
  ScheduleForDelete(*insert);

  auto is = client->ReadObject(
      bucket_name(), object_name, Generation(insert->generation()),
      // Force JSON (if using REST) as this is not supported by the XML API.
      IfMetagenerationNotMatch(0));
  EXPECT_EQ(insert->generation(), is.generation().value_or(0));
  EXPECT_EQ(insert->metageneration(), is.metageneration().value_or(0));
  EXPECT_EQ(insert->storage_class(), is.storage_class().value_or(""));
  EXPECT_EQ(insert->size(), is.size().value_or(0));

  auto const actual = std::string{std::istreambuf_iterator<char>(is), {}};
  is.Close();
  EXPECT_THAT(is.status(), IsOk());
}

TEST_F(ObjectReadHeadersIntegrationTest, CaptureMetadataJsonRanged) {
  StatusOr<Client> client = MakeIntegrationTestClient();
  ASSERT_STATUS_OK(client);

  auto const object_name = MakeRandomObjectName();

  auto insert = client->InsertObject(bucket_name(), object_name, LoremIpsum(),
                                     IfGenerationMatch(0));
  ASSERT_THAT(insert, IsOk());
  ScheduleForDelete(*insert);

  auto is = client->ReadObject(
      bucket_name(), object_name, Generation(insert->generation()),
      // Force JSON (if using REST) as this is not supported by the XML API.
      IfMetagenerationNotMatch(0), ReadFromOffset(4));
  EXPECT_EQ(insert->generation(), is.generation().value_or(0));
  EXPECT_EQ(insert->metageneration(), is.metageneration().value_or(0));
  EXPECT_EQ(insert->storage_class(), is.storage_class().value_or(""));
  EXPECT_EQ(insert->size(), is.size().value_or(0));

  auto const actual = std::string{std::istreambuf_iterator<char>(is), {}};
  is.Close();
  EXPECT_THAT(is.status(), IsOk());
}

TEST_F(ObjectReadHeadersIntegrationTest, SmokeTest) {
  StatusOr<Client> client = MakeIntegrationTestClient();
  ASSERT_STATUS_OK(client);

  auto const object_name = MakeRandomObjectName();

  auto insert = client->InsertObject(bucket_name(), object_name, LoremIpsum(),
                                     IfGenerationMatch(0));
  ASSERT_THAT(insert, IsOk());
  ScheduleForDelete(*insert);

  auto is = client->ReadObject(bucket_name(), object_name,
                               Generation(insert->generation()));
  auto const actual = std::string{std::istreambuf_iterator<char>(is), {}};
  is.Close();
  EXPECT_THAT(is.status(), IsOk());

  // The headers returned by the service depend on the API. This is not an
  // implementation detail we want to hide, as one of the uses of these headers
  // is to help in troubleshooting by exposing API-specific information.
  auto keys = [](HeadersMap const& headers) {
    std::vector<std::string> keys(headers.size());
    std::transform(headers.begin(), headers.end(), keys.begin(),
                   [](HeadersMap::value_type const& p) { return p.first; });
    return keys;
  };
  if (UsingGrpc()) {
    EXPECT_THAT(keys(is.headers()), Contains(":grpc-context-peer"));
  } else if (UsingEmulator()) {
    EXPECT_THAT(keys(is.headers()), Contains("x-goog-hash"));
  } else {
    EXPECT_THAT(keys(is.headers()),
                IsSupersetOf({"x-guploader-uploadid", "x-goog-hash",
                              "x-goog-generation", ":curl-peer"}));
  }
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage
}  // namespace cloud
}  // namespace google
