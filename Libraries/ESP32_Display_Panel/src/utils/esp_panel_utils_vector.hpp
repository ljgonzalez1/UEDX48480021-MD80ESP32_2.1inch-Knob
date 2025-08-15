/*
 * SPDX-FileCopyrightText: 2024-2025 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <vector>
#include "../../../esp-lib-utils/src/esp_lib_utils.h"


namespace esp_panel::utils {

template <typename T>
using vector = std::vector<T, esp_utils::GeneralMemoryAllocator<T>>;

} // namespace esp_panel::utils
