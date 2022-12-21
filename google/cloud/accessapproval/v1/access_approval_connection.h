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
// source: google/cloud/accessapproval/v1/accessapproval.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_ACCESS_APPROVAL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_ACCESS_APPROVAL_CONNECTION_H

#include "google/cloud/accessapproval/v1/access_approval_connection_idempotency_policy.h"
#include "google/cloud/accessapproval/v1/internal/access_approval_retry_traits.h"
#include "google/cloud/accessapproval/v1/internal/access_approval_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace accessapproval_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AccessApprovalRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        accessapproval_v1_internal::AccessApprovalRetryTraits>;

using AccessApprovalLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        accessapproval_v1_internal::AccessApprovalRetryTraits>;

using AccessApprovalLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        accessapproval_v1_internal::AccessApprovalRetryTraits>;

/**
 * The `AccessApprovalConnection` object for `AccessApprovalClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AccessApprovalClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `AccessApprovalClient`.
 *
 * To create a concrete instance, see `MakeAccessApprovalConnection()`.
 *
 * For mocking, see `accessapproval_v1_mocks::MockAccessApprovalConnection`.
 */
class AccessApprovalConnection {
 public:
  virtual ~AccessApprovalConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::accessapproval::v1::ApprovalRequest>
  ListApprovalRequests(
      google::cloud::accessapproval::v1::ListApprovalRequestsMessage request);

  virtual StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  GetApprovalRequest(
      google::cloud::accessapproval::v1::GetApprovalRequestMessage const&
          request);

  virtual StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  ApproveApprovalRequest(
      google::cloud::accessapproval::v1::ApproveApprovalRequestMessage const&
          request);

  virtual StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  DismissApprovalRequest(
      google::cloud::accessapproval::v1::DismissApprovalRequestMessage const&
          request);

  virtual StatusOr<google::cloud::accessapproval::v1::ApprovalRequest>
  InvalidateApprovalRequest(
      google::cloud::accessapproval::v1::InvalidateApprovalRequestMessage const&
          request);

  virtual StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  GetAccessApprovalSettings(
      google::cloud::accessapproval::v1::GetAccessApprovalSettingsMessage const&
          request);

  virtual StatusOr<google::cloud::accessapproval::v1::AccessApprovalSettings>
  UpdateAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          UpdateAccessApprovalSettingsMessage const& request);

  virtual Status DeleteAccessApprovalSettings(
      google::cloud::accessapproval::v1::
          DeleteAccessApprovalSettingsMessage const& request);

  virtual StatusOr<
      google::cloud::accessapproval::v1::AccessApprovalServiceAccount>
  GetAccessApprovalServiceAccount(
      google::cloud::accessapproval::v1::
          GetAccessApprovalServiceAccountMessage const& request);
};

/**
 * A factory function to construct an object of type `AccessApprovalConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of AccessApprovalClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AccessApprovalConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::accessapproval_v1::AccessApprovalPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `AccessApprovalConnection` created by
 * this function.
 */
std::shared_ptr<AccessApprovalConnection> MakeAccessApprovalConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accessapproval_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSAPPROVAL_V1_ACCESS_APPROVAL_CONNECTION_H