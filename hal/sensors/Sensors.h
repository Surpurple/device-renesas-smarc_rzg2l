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

#ifndef ANDROID_HARDWARE_SENSORS_V1_0_HIHOPE_H
#define ANDROID_HARDWARE_SENSORS_V1_0_HIHOPE_H

#include <android/hardware/sensors/1.0/ISensors.h>
#include <hidl/Status.h>



namespace android {
namespace hardware {
namespace sensors {
namespace V1_0 {
namespace hihope_rzg2m {

using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::hardware::hidl_vec;

class LSM9DS0_sensor;

class Sensors : public ISensors
{
    public:
        ~Sensors () override = default;
        /*
         * Methods from ::android::hardware::sensors::V1_0::ISensors follow.
         */
        Return<void>   getSensorsList (getSensorsList_cb) override;
        Return<Result> setOperationMode (OperationMode) override;
        Return<Result> activate (int32_t, bool) override;
        Return<void>   poll (int32_t, poll_cb) override;
        Return<Result> batch (int32_t, int64_t, int64_t) override;
        Return<Result> flush (int32_t) override;
        Return<Result> injectSensorData (const Event&) override;
        Return<void>   registerDirectChannel (const SharedMemInfo&, registerDirectChannel_cb) override;
        Return<Result> unregisterDirectChannel (int32_t) override;
        Return<void>   configDirectReport (int32_t, int32_t, RateLevel, configDirectReport_cb) override;
};

}  // namespace hihope_rzg2m
}  // namespace V1_0
}  // namespace sensors
}  // namespace hardware
}  // namespace android

#endif//ANDROID_HARDWARE_SENSORS_V1_0_HIHOPE_H
