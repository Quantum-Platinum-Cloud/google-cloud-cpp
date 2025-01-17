// Copyright 2022 Google LLC
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
// source: google/cloud/dataplex/v1/metadata.proto

#include "google/cloud/dataplex/metadata_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataplex {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

MetadataServiceConnectionIdempotencyPolicy::
    ~MetadataServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<MetadataServiceConnectionIdempotencyPolicy>
MetadataServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<MetadataServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency MetadataServiceConnectionIdempotencyPolicy::CreateEntity(
    google::cloud::dataplex::v1::CreateEntityRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MetadataServiceConnectionIdempotencyPolicy::UpdateEntity(
    google::cloud::dataplex::v1::UpdateEntityRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MetadataServiceConnectionIdempotencyPolicy::DeleteEntity(
    google::cloud::dataplex::v1::DeleteEntityRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MetadataServiceConnectionIdempotencyPolicy::GetEntity(
    google::cloud::dataplex::v1::GetEntityRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MetadataServiceConnectionIdempotencyPolicy::ListEntities(
    google::cloud::dataplex::v1::ListEntitiesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MetadataServiceConnectionIdempotencyPolicy::CreatePartition(
    google::cloud::dataplex::v1::CreatePartitionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MetadataServiceConnectionIdempotencyPolicy::DeletePartition(
    google::cloud::dataplex::v1::DeletePartitionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MetadataServiceConnectionIdempotencyPolicy::GetPartition(
    google::cloud::dataplex::v1::GetPartitionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MetadataServiceConnectionIdempotencyPolicy::ListPartitions(
    google::cloud::dataplex::v1::ListPartitionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<MetadataServiceConnectionIdempotencyPolicy>
MakeDefaultMetadataServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<MetadataServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex
}  // namespace cloud
}  // namespace google
