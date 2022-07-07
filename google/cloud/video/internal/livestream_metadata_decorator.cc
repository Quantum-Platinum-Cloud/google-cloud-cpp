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
// source: google/cloud/video/livestream/v1/service.proto

#include "google/cloud/video/internal/livestream_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/video/livestream/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LivestreamServiceMetadata::LivestreamServiceMetadata(
    std::shared_ptr<LivestreamServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateChannel(cq, std::move(context), request);
}

StatusOr<google::cloud::video::livestream::v1::ListChannelsResponse>
LivestreamServiceMetadata::ListChannels(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListChannelsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListChannels(context, request);
}

StatusOr<google::cloud::video::livestream::v1::Channel>
LivestreamServiceMetadata::GetChannel(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetChannelRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetChannel(context, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteChannel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  SetMetadata(*context, "channel.name=" + request.channel().name());
  return child_->AsyncUpdateChannel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncStartChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncStartChannel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncStopChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncStopChannel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncCreateInput(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateInput(cq, std::move(context), request);
}

StatusOr<google::cloud::video::livestream::v1::ListInputsResponse>
LivestreamServiceMetadata::ListInputs(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListInputsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListInputs(context, request);
}

StatusOr<google::cloud::video::livestream::v1::Input>
LivestreamServiceMetadata::GetInput(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetInputRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetInput(context, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncDeleteInput(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteInput(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncUpdateInput(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  SetMetadata(*context, "input.name=" + request.input().name());
  return child_->AsyncUpdateInput(cq, std::move(context), request);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceMetadata::CreateEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::CreateEventRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateEvent(context, request);
}

StatusOr<google::cloud::video::livestream::v1::ListEventsResponse>
LivestreamServiceMetadata::ListEvents(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListEventsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListEvents(context, request);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceMetadata::GetEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetEventRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetEvent(context, request);
}

Status LivestreamServiceMetadata::DeleteEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::DeleteEventRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteEvent(context, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> LivestreamServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void LivestreamServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void LivestreamServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google