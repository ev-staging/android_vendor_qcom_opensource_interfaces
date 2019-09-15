/*
 * Copyright (C) 2019 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "vendor.qti.hardware.cryptfshw@1.0-service"

#include <vendor/qti/hardware/cryptfshw/1.0/ICryptfsHw.h>

#include <hidl/LegacySupport.h>

// Extra threads make priority inheritance faster.
static const size_t kMaxThreads = 5;

using android::hardware::defaultPassthroughServiceImplementation;
using vendor::qti::hardware::cryptfshw::V1_0::ICryptfsHw;

int main() {
  return defaultPassthroughServiceImplementation<ICryptfsHw>(kMaxThreads);
}
