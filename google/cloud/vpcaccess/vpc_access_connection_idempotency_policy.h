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
// source: google/cloud/vpcaccess/v1/vpc_access.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_VPC_ACCESS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_VPC_ACCESS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/vpcaccess/v1/vpc_access.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vpcaccess {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VpcAccessServiceConnectionIdempotencyPolicy {
 public:
  virtual ~VpcAccessServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<VpcAccessServiceConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::internal::Idempotency CreateConnector(
      google::cloud::vpcaccess::v1::CreateConnectorRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency GetConnector(
      google::cloud::vpcaccess::v1::GetConnectorRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency ListConnectors(
      google::cloud::vpcaccess::v1::ListConnectorsRequest request) = 0;

  virtual google::cloud::internal::Idempotency DeleteConnector(
      google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request) = 0;
};

std::unique_ptr<VpcAccessServiceConnectionIdempotencyPolicy>
MakeDefaultVpcAccessServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vpcaccess
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_VPC_ACCESS_CONNECTION_IDEMPOTENCY_POLICY_H