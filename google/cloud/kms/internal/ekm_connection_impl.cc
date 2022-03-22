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
// source: google/cloud/kms/v1/ekm_service.proto

#include "google/cloud/kms/internal/ekm_connection_impl.h"
#include "google/cloud/kms/internal/ekm_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace kms_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EkmServiceConnectionImpl::EkmServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<kms_internal::EkmServiceStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      kms_internal::EkmServiceDefaultOptions(
                                          EkmServiceConnection::options()))) {}

StreamRange<google::cloud::kms::v1::EkmConnection>
EkmServiceConnectionImpl::ListEkmConnections(
    google::cloud::kms::v1::ListEkmConnectionsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry =
      std::shared_ptr<kms::EkmServiceRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListEkmConnections(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::kms::v1::EkmConnection>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::kms::v1::ListEkmConnectionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::kms::v1::ListEkmConnectionsRequest const&
                       request) {
              return stub->ListEkmConnections(context, request);
            },
            r, function_name);
      },
      [](google::cloud::kms::v1::ListEkmConnectionsResponse r) {
        std::vector<google::cloud::kms::v1::EkmConnection> result(
            r.ekm_connections().size());
        auto& messages = *r.mutable_ekm_connections();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceConnectionImpl::GetEkmConnection(
    google::cloud::kms::v1::GetEkmConnectionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetEkmConnection(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::GetEkmConnectionRequest const& request) {
        return stub_->GetEkmConnection(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceConnectionImpl::CreateEkmConnection(
    google::cloud::kms::v1::CreateEkmConnectionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateEkmConnection(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::kms::v1::CreateEkmConnectionRequest const& request) {
        return stub_->CreateEkmConnection(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceConnectionImpl::UpdateEkmConnection(
    google::cloud::kms::v1::UpdateEkmConnectionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateEkmConnection(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::kms::v1::UpdateEkmConnectionRequest const& request) {
        return stub_->UpdateEkmConnection(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_internal
}  // namespace cloud
}  // namespace google