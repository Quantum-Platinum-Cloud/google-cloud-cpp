// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: generator/integration_tests/test.proto
#include "generator/integration_tests/golden/golden_kitchen_sink_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

using ::google::cloud::internal::Idempotency;

GoldenKitchenSinkConnectionIdempotencyPolicy::~GoldenKitchenSinkConnectionIdempotencyPolicy() = default;

namespace {
class DefaultGoldenKitchenSinkConnectionIdempotencyPolicy : public GoldenKitchenSinkConnectionIdempotencyPolicy {
 public:
  ~DefaultGoldenKitchenSinkConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<GoldenKitchenSinkConnectionIdempotencyPolicy> clone() const override {
    return absl::make_unique<DefaultGoldenKitchenSinkConnectionIdempotencyPolicy>(*this);
  }

  Idempotency
  GenerateAccessToken(google::test::admin::database::v1::GenerateAccessTokenRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency
  GenerateIdToken(google::test::admin::database::v1::GenerateIdTokenRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency
  WriteLogEntries(google::test::admin::database::v1::WriteLogEntriesRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency
  ListLogs(google::test::admin::database::v1::ListLogsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency
  ListServiceAccountKeys(google::test::admin::database::v1::ListServiceAccountKeysRequest const&) override {
    return Idempotency::kIdempotent;
  }

};
}  // namespace

std::unique_ptr<GoldenKitchenSinkConnectionIdempotencyPolicy>
    MakeDefaultGoldenKitchenSinkConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultGoldenKitchenSinkConnectionIdempotencyPolicy>();
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace golden
}  // namespace cloud
}  // namespace google
