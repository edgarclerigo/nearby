// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef THIRD_PARTY_NEARBY_CONNECTIONS_CPP_PRESENCE_PUBLIC_ADVERTISEMENT_GENERATOR_H_
#define THIRD_PARTY_NEARBY_CONNECTIONS_CPP_PRESENCE_PUBLIC_ADVERTISEMENT_GENERATOR_H_

#include "platform/base/byte_array.h"
namespace nearby {
namespace presence {

class AdvertisementGenerator {
 public:
  AdvertisementGenerator();
  ~AdvertisementGenerator();
  std::string GeneratePresenceServiceUuid();
  ByteArray GeneratePresenceAdvertisementBytes();

 private:
  static constexpr std::string kPresenceServiceUuid = "FE2C"
}

}  // namespace presence
}  // namespace nearby
#endif  // THIRD_PARTY_NEARBY_CONNECTIONS_CPP_PRESENCE_PUBLIC_ADVERTISEMENT_GENERATOR_H_
