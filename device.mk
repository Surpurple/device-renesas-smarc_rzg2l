#
# Copyright (C) 2018 GlobalLogic
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
#

$(call inherit-product, device/renesas/common/DeviceCommon.mk)
$(call inherit-product, device/renesas/smarc_rzg2l/modules.mk)

# ----------------------------------------------------------------------
PRODUCT_COPY_FILES += \
    device/renesas/smarc_rzg2l/permissions/privapp-permissions-smarc_rzg2l.xml:$(TARGET_COPY_OUT_VENDOR)/etc/permissions/privapp-permissions-smarc_rzg2l.xml

# Init RC files
PRODUCT_COPY_FILES += \
    device/renesas/smarc_rzg2l/init.smarc_rzg2l.rc:$(TARGET_COPY_OUT_VENDOR)/etc/init/hw/init.smarc_rzg2l.rc \
    device/renesas/smarc_rzg2l/init.smarc_rzg2l.usb.rc:$(TARGET_COPY_OUT_VENDOR)/etc/init/hw/init.smarc_rzg2l.usb.rc \
    device/renesas/smarc_rzg2l/ueventd.smarc_rzg2l.rc:$(TARGET_COPY_OUT_VENDOR)/ueventd.rc \
    device/renesas/smarc_rzg2l/init.recovery.smarc_rzg2l.rc:root/init.recovery.smarc_rzg2l.rc

# Touchcreen configuration
PRODUCT_COPY_FILES += \
    device/renesas/smarc_rzg2l/touchscreen_skeleton.idc:$(TARGET_COPY_OUT_VENDOR)/usr/idc/touchscreen_skeleton.idc

# HDMI touchcreen configuration for Melfas LGD AIT Touch Controller
PRODUCT_COPY_FILES += \
    device/renesas/smarc_rzg2l/Melfas_LGD_AIT_Touch_Controller.idc:$(TARGET_COPY_OUT_VENDOR)/usr/idc/Melfas_LGD_AIT_Touch_Controller.idc

# Enable generic Memtrack
PRODUCT_PACKAGES += memtrack.$(TARGET_BOARD_PLATFORM) \
    android.hardware.memtrack@1.0-service \
    android.hardware.memtrack@1.0-impl

# Support load memtrack.r9a07g044l.so
PRODUCT_PROPERTY_OVERRIDES += \
    ro.hardware.memtrack = $(TARGET_BOARD_PLATFORM)
