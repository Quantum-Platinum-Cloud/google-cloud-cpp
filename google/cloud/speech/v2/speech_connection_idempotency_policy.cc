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
// source: google/cloud/speech/v2/cloud_speech.proto

#include "google/cloud/speech/v2/speech_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace speech_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SpeechConnectionIdempotencyPolicy::~SpeechConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<SpeechConnectionIdempotencyPolicy>
SpeechConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<SpeechConnectionIdempotencyPolicy>(*this);
}

Idempotency SpeechConnectionIdempotencyPolicy::CreateRecognizer(
    google::cloud::speech::v2::CreateRecognizerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::ListRecognizers(
    google::cloud::speech::v2::ListRecognizersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::GetRecognizer(
    google::cloud::speech::v2::GetRecognizerRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::UpdateRecognizer(
    google::cloud::speech::v2::UpdateRecognizerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::DeleteRecognizer(
    google::cloud::speech::v2::DeleteRecognizerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::UndeleteRecognizer(
    google::cloud::speech::v2::UndeleteRecognizerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::Recognize(
    google::cloud::speech::v2::RecognizeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::BatchRecognize(
    google::cloud::speech::v2::BatchRecognizeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::GetConfig(
    google::cloud::speech::v2::GetConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::UpdateConfig(
    google::cloud::speech::v2::UpdateConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::CreateCustomClass(
    google::cloud::speech::v2::CreateCustomClassRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::ListCustomClasses(
    google::cloud::speech::v2::ListCustomClassesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::GetCustomClass(
    google::cloud::speech::v2::GetCustomClassRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::UpdateCustomClass(
    google::cloud::speech::v2::UpdateCustomClassRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::DeleteCustomClass(
    google::cloud::speech::v2::DeleteCustomClassRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::UndeleteCustomClass(
    google::cloud::speech::v2::UndeleteCustomClassRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::CreatePhraseSet(
    google::cloud::speech::v2::CreatePhraseSetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::ListPhraseSets(
    google::cloud::speech::v2::ListPhraseSetsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::GetPhraseSet(
    google::cloud::speech::v2::GetPhraseSetRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::UpdatePhraseSet(
    google::cloud::speech::v2::UpdatePhraseSetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::DeletePhraseSet(
    google::cloud::speech::v2::DeletePhraseSetRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SpeechConnectionIdempotencyPolicy::UndeletePhraseSet(
    google::cloud::speech::v2::UndeletePhraseSetRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<SpeechConnectionIdempotencyPolicy>
MakeDefaultSpeechConnectionIdempotencyPolicy() {
  return absl::make_unique<SpeechConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2
}  // namespace cloud
}  // namespace google
