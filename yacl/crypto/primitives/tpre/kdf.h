// Copyright 2023 Chengfang Financial Technology Co., Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef YACL_CRYPTO_PRIMITIVES_TPRE_KDF_H_
#define YACL_CRYPTO_PRIMITIVES_TPRE_KDF_H_
#include <memory>
#include <vector>

#include "yacl/crypto/base/hash/hash_utils.h"

namespace yacl::crypto {

/// @brief Implementing key-derived functions via Sm3
/// @param Z, a random value
/// @param key_len, the key length
/// @return key
std::vector<uint8_t> KDF(absl::string_view Z, size_t key_len);

}  // namespace yacl::crypto

#endif  // YACL_CRYPTO_PRIMITIVES_TPRE_KDF_H_
