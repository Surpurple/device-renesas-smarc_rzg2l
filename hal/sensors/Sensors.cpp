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

#include "Sensors.h"
#include <android-base/logging.h>
#include <thread>

namespace android {
namespace hardware {
namespace sensors {
namespace V1_0 {
namespace smarc_rzg2l {

Return<void> Sensors::getSensorsList (getSensorsList_cb cb)
{
    hidl_vec<SensorInfo> sis;

    cb (sis);

    return Void ();
}

Return<Result> Sensors::setOperationMode(OperationMode)
{
    return Result::BAD_VALUE;
}

Return<Result> Sensors::activate(int32_t, bool)
{
    return Result::BAD_VALUE;
}

Return<void> Sensors::poll (int32_t, poll_cb cb)
{
    hidl_vec<Event> es;

    cb (Result::OK, es, hidl_vec<SensorInfo>() );

    return Void ();
}

Return<Result> Sensors::batch (int32_t, int64_t, int64_t)
{
    return Result::BAD_VALUE;
}

Return<Result> Sensors::flush (int32_t)
{
    return Result::BAD_VALUE;
}

Return<Result> Sensors::injectSensorData (const Event&)
{
    return Result::INVALID_OPERATION;
}

Return<void> Sensors::registerDirectChannel (const SharedMemInfo&, registerDirectChannel_cb cb)
{
    cb (Result::INVALID_OPERATION, 0);
    return Void ();
}

Return<Result> Sensors::unregisterDirectChannel (int32_t)
{
    return Result::INVALID_OPERATION;
}

Return<void> Sensors::configDirectReport (int32_t, int32_t, RateLevel, configDirectReport_cb cb)
{
    cb (Result::INVALID_OPERATION, 0);

    return Void ();
}

}  // namespace smarc_rzg2l
}  // namespace V1_0
}  // namespace sensors
}  // namespace hardware
}  // namespace android
