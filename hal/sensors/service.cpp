//
// Copyright (C) 2018 The Android Open Source Project
// Copyright (C) 2018 GlobalLogic
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#define LOG_TAG "SensorsHAL"

#include <android-base/logging.h>
#include <binder/ProcessState.h>
#include <hidl/HidlTransportSupport.h>
#include <android/hardware/sensors/1.0/ISensors.h>

#include "Sensors.h"

using namespace android::hardware;
using namespace android::hardware::sensors::V1_0;

int main (int, char **)
{
    android::ProcessState::initWithDriver ("/dev/vndbinder");
    android::sp<ISensors> sensors_hal = new smarc_rzg2l::Sensors ();

    configureRpcThreadpool (2, true);

    const auto status = sensors_hal->registerAsService ();
    CHECK_EQ(status, android::OK) << "Failed to register Sensors HAL.";

    joinRpcThreadpool ();
}
