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
// source: google/cloud/language/v1/language_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_INTERNAL_LANGUAGE_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_INTERNAL_LANGUAGE_CONNECTION_IMPL_H

#include "google/cloud/language/internal/language_retry_traits.h"
#include "google/cloud/language/internal/language_stub.h"
#include "google/cloud/language/language_connection.h"
#include "google/cloud/language/language_connection_idempotency_policy.h"
#include "google/cloud/language/language_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace language_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LanguageServiceConnectionImpl
    : public language::LanguageServiceConnection {
 public:
  ~LanguageServiceConnectionImpl() override = default;

  LanguageServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<language_internal::LanguageServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
  AnalyzeSentiment(google::cloud::language::v1::AnalyzeSentimentRequest const&
                       request) override;

  StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
  AnalyzeEntities(google::cloud::language::v1::AnalyzeEntitiesRequest const&
                      request) override;

  StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
  AnalyzeEntitySentiment(
      google::cloud::language::v1::AnalyzeEntitySentimentRequest const& request)
      override;

  StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse> AnalyzeSyntax(
      google::cloud::language::v1::AnalyzeSyntaxRequest const& request)
      override;

  StatusOr<google::cloud::language::v1::ClassifyTextResponse> ClassifyText(
      google::cloud::language::v1::ClassifyTextRequest const& request) override;

  StatusOr<google::cloud::language::v1::AnnotateTextResponse> AnnotateText(
      google::cloud::language::v1::AnnotateTextRequest const& request) override;

 private:
  std::unique_ptr<language::LanguageServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<language::LanguageServiceRetryPolicyOption>()) {
      return options.get<language::LanguageServiceRetryPolicyOption>()->clone();
    }
    return options_.get<language::LanguageServiceRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<language::LanguageServiceBackoffPolicyOption>()) {
      return options.get<language::LanguageServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<language::LanguageServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<language::LanguageServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            language::LanguageServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<language::LanguageServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<language::LanguageServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<language_internal::LanguageServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_INTERNAL_LANGUAGE_CONNECTION_IMPL_H
