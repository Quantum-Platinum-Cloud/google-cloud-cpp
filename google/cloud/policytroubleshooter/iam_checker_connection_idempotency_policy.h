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
// source: google/cloud/policytroubleshooter/v1/checker.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYTROUBLESHOOTER_IAM_CHECKER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYTROUBLESHOOTER_IAM_CHECKER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/policytroubleshooter/v1/checker.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace policytroubleshooter {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IamCheckerConnectionIdempotencyPolicy {
 public:
  virtual ~IamCheckerConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<IamCheckerConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::internal::Idempotency TroubleshootIamPolicy(
      google::cloud::policytroubleshooter::v1::
          TroubleshootIamPolicyRequest const& request) = 0;
};

std::unique_ptr<IamCheckerConnectionIdempotencyPolicy>
MakeDefaultIamCheckerConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYTROUBLESHOOTER_IAM_CHECKER_CONNECTION_IDEMPOTENCY_POLICY_H
