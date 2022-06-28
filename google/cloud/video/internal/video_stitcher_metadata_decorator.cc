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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#include "google/cloud/video/internal/video_stitcher_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/video/stitcher/v1/video_stitcher_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VideoStitcherServiceMetadata::VideoStitcherServiceMetadata(
    std::shared_ptr<VideoStitcherServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceMetadata::CreateCdnKey(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateCdnKey(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListCdnKeysResponse>
VideoStitcherServiceMetadata::ListCdnKeys(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListCdnKeysRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListCdnKeys(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceMetadata::GetCdnKey(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetCdnKey(context, request);
}

Status VideoStitcherServiceMetadata::DeleteCdnKey(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteCdnKey(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceMetadata::UpdateCdnKey(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request) {
  SetMetadata(context, "cdn_key.name=" + request.cdn_key().name());
  return child_->UpdateCdnKey(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceMetadata::CreateVodSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateVodSession(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceMetadata::GetVodSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetVodSessionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetVodSession(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListVodStitchDetailsResponse>
VideoStitcherServiceMetadata::ListVodStitchDetails(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListVodStitchDetails(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceMetadata::GetVodStitchDetail(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetVodStitchDetail(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListVodAdTagDetailsResponse>
VideoStitcherServiceMetadata::ListVodAdTagDetails(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListVodAdTagDetails(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceMetadata::GetVodAdTagDetail(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetVodAdTagDetail(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListLiveAdTagDetailsResponse>
VideoStitcherServiceMetadata::ListLiveAdTagDetails(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListLiveAdTagDetails(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceMetadata::GetLiveAdTagDetail(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetLiveAdTagDetail(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceMetadata::CreateSlate(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateSlate(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::ListSlatesResponse>
VideoStitcherServiceMetadata::ListSlates(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::ListSlatesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListSlates(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceMetadata::GetSlate(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetSlateRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetSlate(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceMetadata::UpdateSlate(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request) {
  SetMetadata(context, "slate.name=" + request.slate().name());
  return child_->UpdateSlate(context, request);
}

Status VideoStitcherServiceMetadata::DeleteSlate(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteSlate(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceMetadata::CreateLiveSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateLiveSession(context, request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceMetadata::GetLiveSession(
    grpc::ClientContext& context,
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetLiveSession(context, request);
}

void VideoStitcherServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void VideoStitcherServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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