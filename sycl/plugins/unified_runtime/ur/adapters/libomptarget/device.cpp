//===--------- device.cpp - Libomptarget Adapter ----------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//

#include "common.hpp"

UR_APIEXPORT ur_result_t UR_APICALL
urDeviceGet([[maybe_unused]] ur_platform_handle_t hPlatform,
            [[maybe_unused]] ur_device_type_t DeviceType,
            [[maybe_unused]] uint32_t NumEntries,
            [[maybe_unused]] ur_device_handle_t *phDevices,
            [[maybe_unused]] uint32_t *pNumDevices) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urDeviceGetInfo(
    [[maybe_unused]] ur_device_handle_t hDevice,
    [[maybe_unused]] ur_device_info_t propName,
    [[maybe_unused]] size_t propSize, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urDevicePartition(
    [[maybe_unused]] ur_device_handle_t hDevice,
    [[maybe_unused]] const ur_device_partition_properties_t *pProperties,
    [[maybe_unused]] uint32_t NumDevices,
    [[maybe_unused]] ur_device_handle_t *phSubDevices,
    [[maybe_unused]] uint32_t *pNumDevicesRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urDeviceRetain([[maybe_unused]] ur_device_handle_t hDevice) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urDeviceRelease([[maybe_unused]] ur_device_handle_t hDevice) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urDeviceGetNativeHandle([[maybe_unused]] ur_device_handle_t hDevice,
                        [[maybe_unused]] ur_native_handle_t *phNativeDevice) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urDeviceCreateWithNativeHandle(
    [[maybe_unused]] ur_native_handle_t hNativeDevice,
    [[maybe_unused]] ur_platform_handle_t,
    [[maybe_unused]] const ur_device_native_properties_t *,
    [[maybe_unused]] ur_device_handle_t *phDevice) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urDeviceGetGlobalTimestamps([[maybe_unused]] ur_device_handle_t hDevice,
                            [[maybe_unused]] uint64_t *pDeviceTimestamp,
                            [[maybe_unused]] uint64_t *pHostTimestamp) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urDeviceSelectBinary([[maybe_unused]] ur_device_handle_t hDevice,
                     [[maybe_unused]] const ur_device_binary_t *pBinaries,
                     [[maybe_unused]] uint32_t NumBinaries,
                     [[maybe_unused]] uint32_t *pSelectedBinary) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
