# Copyright (C) 2019 Renesas
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

TARGET_BOARD_PLATFORM ?= r9a07g004l
RELEASE_NUMBER ?= test

$(call inherit-product, device/renesas/smarc_rzg2l/device.mk)

PRODUCT_NAME := smarc_rzg2l
PRODUCT_DEVICE := smarc_rzg2l
PRODUCT_BRAND := Renesas
PRODUCT_MODEL := SMARC_G2L-$(TARGET_BOARD_PLATFORM)
PRODUCT_MANUFACTURER := Renesas

BUILD_VERSION_TAGS += $(TARGET_BOARD_PLATFORM) $(RELEASE_NUMBER)
