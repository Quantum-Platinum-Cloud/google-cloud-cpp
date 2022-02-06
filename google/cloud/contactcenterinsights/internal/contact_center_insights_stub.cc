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
// source: google/cloud/contactcenterinsights/v1/contact_center_insights.proto

#include "google/cloud/contactcenterinsights/internal/contact_center_insights_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/contactcenterinsights/v1/contact_center_insights.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace contactcenterinsights_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContactCenterInsightsStub::~ContactCenterInsightsStub() = default;

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
DefaultContactCenterInsightsStub::CreateConversation(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::CreateConversationRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Conversation response;
  auto status =
      grpc_stub_->CreateConversation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
DefaultContactCenterInsightsStub::UpdateConversation(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::UpdateConversationRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Conversation response;
  auto status =
      grpc_stub_->UpdateConversation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
DefaultContactCenterInsightsStub::GetConversation(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::GetConversationRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Conversation response;
  auto status =
      grpc_stub_->GetConversation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListConversationsResponse>
DefaultContactCenterInsightsStub::ListConversations(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::ListConversationsRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::ListConversationsResponse response;
  auto status =
      grpc_stub_->ListConversations(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultContactCenterInsightsStub::DeleteConversation(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::DeleteConversationRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteConversation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncCreateAnalysis(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](
          grpc::ClientContext* context,
          google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAnalysis(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::contactcenterinsights::v1::Analysis>
DefaultContactCenterInsightsStub::GetAnalysis(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::GetAnalysisRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Analysis response;
  auto status = grpc_stub_->GetAnalysis(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListAnalysesResponse>
DefaultContactCenterInsightsStub::ListAnalyses(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::ListAnalysesRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::ListAnalysesResponse response;
  auto status = grpc_stub_->ListAnalyses(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultContactCenterInsightsStub::DeleteAnalysis(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteAnalysis(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncExportInsightsData(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 ExportInsightsDataRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportInsightsData(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncCreateIssueModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 CreateIssueModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateIssueModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
DefaultContactCenterInsightsStub::UpdateIssueModel(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::IssueModel response;
  auto status =
      grpc_stub_->UpdateIssueModel(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
DefaultContactCenterInsightsStub::GetIssueModel(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::IssueModel response;
  auto status = grpc_stub_->GetIssueModel(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssueModelsResponse>
DefaultContactCenterInsightsStub::ListIssueModels(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::ListIssueModelsRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::ListIssueModelsResponse response;
  auto status =
      grpc_stub_->ListIssueModels(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncDeleteIssueModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 DeleteIssueModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteIssueModel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncDeployIssueModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 DeployIssueModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeployIssueModel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncUndeployIssueModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest const&
        request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::contactcenterinsights::v1::
                 UndeployIssueModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeployIssueModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
DefaultContactCenterInsightsStub::GetIssue(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::GetIssueRequest const& request) {
  google::cloud::contactcenterinsights::v1::Issue response;
  auto status = grpc_stub_->GetIssue(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssuesResponse>
DefaultContactCenterInsightsStub::ListIssues(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::ListIssuesRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::ListIssuesResponse response;
  auto status = grpc_stub_->ListIssues(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
DefaultContactCenterInsightsStub::UpdateIssue(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::UpdateIssueRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Issue response;
  auto status = grpc_stub_->UpdateIssue(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::contactcenterinsights::v1::CalculateIssueModelStatsResponse>
DefaultContactCenterInsightsStub::CalculateIssueModelStats(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::
        CalculateIssueModelStatsRequest const& request) {
  google::cloud::contactcenterinsights::v1::CalculateIssueModelStatsResponse
      response;
  auto status =
      grpc_stub_->CalculateIssueModelStats(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
DefaultContactCenterInsightsStub::CreatePhraseMatcher(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::CreatePhraseMatcherRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::PhraseMatcher response;
  auto status =
      grpc_stub_->CreatePhraseMatcher(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
DefaultContactCenterInsightsStub::GetPhraseMatcher(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::PhraseMatcher response;
  auto status =
      grpc_stub_->GetPhraseMatcher(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListPhraseMatchersResponse>
DefaultContactCenterInsightsStub::ListPhraseMatchers(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::ListPhraseMatchersRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::ListPhraseMatchersResponse response;
  auto status =
      grpc_stub_->ListPhraseMatchers(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultContactCenterInsightsStub::DeletePhraseMatcher(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::DeletePhraseMatcherRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeletePhraseMatcher(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
DefaultContactCenterInsightsStub::UpdatePhraseMatcher(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::UpdatePhraseMatcherRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::PhraseMatcher response;
  auto status =
      grpc_stub_->UpdatePhraseMatcher(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::CalculateStatsResponse>
DefaultContactCenterInsightsStub::CalculateStats(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::CalculateStatsResponse response;
  auto status = grpc_stub_->CalculateStats(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
DefaultContactCenterInsightsStub::GetSettings(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::GetSettingsRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Settings response;
  auto status = grpc_stub_->GetSettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
DefaultContactCenterInsightsStub::UpdateSettings(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::Settings response;
  auto status = grpc_stub_->UpdateSettings(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
DefaultContactCenterInsightsStub::CreateView(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::CreateViewRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::View response;
  auto status = grpc_stub_->CreateView(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
DefaultContactCenterInsightsStub::GetView(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::GetViewRequest const& request) {
  google::cloud::contactcenterinsights::v1::View response;
  auto status = grpc_stub_->GetView(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::ListViewsResponse>
DefaultContactCenterInsightsStub::ListViews(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::ListViewsRequest const& request) {
  google::cloud::contactcenterinsights::v1::ListViewsResponse response;
  auto status = grpc_stub_->ListViews(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
DefaultContactCenterInsightsStub::UpdateView(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::UpdateViewRequest const&
        request) {
  google::cloud::contactcenterinsights::v1::View response;
  auto status = grpc_stub_->UpdateView(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultContactCenterInsightsStub::DeleteView(
    grpc::ClientContext& client_context,
    google::cloud::contactcenterinsights::v1::DeleteViewRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteView(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultContactCenterInsightsStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultContactCenterInsightsStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return cq
      .MakeUnaryRpc(
          [this](grpc::ClientContext* context,
                 google::longrunning::CancelOperationRequest const& request,
                 grpc::CompletionQueue* cq) {
            return operations_->AsyncCancelOperation(context, request, cq);
          },
          request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contactcenterinsights_internal
}  // namespace cloud
}  // namespace google