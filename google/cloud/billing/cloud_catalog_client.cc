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
// source: google/cloud/billing/v1/cloud_catalog.proto

#include "google/cloud/billing/cloud_catalog_client.h"
#include "google/cloud/billing/internal/cloud_catalog_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudCatalogClient::CloudCatalogClient(
    std::shared_ptr<CloudCatalogConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(
          billing_internal::CloudCatalogDefaultOptions(std::move(options))) {}
CloudCatalogClient::~CloudCatalogClient() = default;

StreamRange<google::cloud::billing::v1::Service>
CloudCatalogClient::ListServices(Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::billing::v1::ListServicesRequest request;
  return connection_->ListServices(request);
}

StreamRange<google::cloud::billing::v1::Service>
CloudCatalogClient::ListServices(
    google::cloud::billing::v1::ListServicesRequest request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListServices(std::move(request));
}

StreamRange<google::cloud::billing::v1::Sku> CloudCatalogClient::ListSkus(
    std::string const& parent, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::billing::v1::ListSkusRequest request;
  request.set_parent(parent);
  return connection_->ListSkus(request);
}

StreamRange<google::cloud::billing::v1::Sku> CloudCatalogClient::ListSkus(
    google::cloud::billing::v1::ListSkusRequest request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListSkus(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing
}  // namespace cloud
}  // namespace google
