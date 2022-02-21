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
// source: google/devtools/cloudprofiler/v2/profiler.proto

#include "google/cloud/profiler/internal/profiler_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/devtools/cloudprofiler/v2/profiler.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace profiler_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProfilerServiceLogging::ProfilerServiceLogging(
    std::shared_ptr<ProfilerServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::devtools::cloudprofiler::v2::Profile>
ProfilerServiceLogging::CreateProfile(
    grpc::ClientContext& context,
    google::devtools::cloudprofiler::v2::CreateProfileRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudprofiler::v2::CreateProfileRequest const&
                 request) { return child_->CreateProfile(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudprofiler::v2::Profile>
ProfilerServiceLogging::CreateOfflineProfile(
    grpc::ClientContext& context,
    google::devtools::cloudprofiler::v2::CreateOfflineProfileRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudprofiler::v2::
                 CreateOfflineProfileRequest const& request) {
        return child_->CreateOfflineProfile(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudprofiler::v2::Profile>
ProfilerServiceLogging::UpdateProfile(
    grpc::ClientContext& context,
    google::devtools::cloudprofiler::v2::UpdateProfileRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudprofiler::v2::UpdateProfileRequest const&
                 request) { return child_->UpdateProfile(context, request); },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace profiler_internal
}  // namespace cloud
}  // namespace google