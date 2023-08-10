//===--------- context.cpp - Libomptarget Adapter --------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//

#include "common.hpp"

UR_APIEXPORT ur_result_t UR_APICALL
urContextCreate([[maybe_unused]] uint32_t DeviceCount,
                [[maybe_unused]] const ur_device_handle_t *phDevices,
                [[maybe_unused]] const ur_context_properties_t *,
                [[maybe_unused]] ur_context_handle_t *phContext) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urContextGetInfo(
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] ur_context_info_t propName,
    [[maybe_unused]] size_t propSize, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pPropSizeRet) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urContextRelease([[maybe_unused]] ur_context_handle_t hContext) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urContextRetain([[maybe_unused]] ur_context_handle_t hContext) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urContextGetNativeHandle([[maybe_unused]] ur_context_handle_t hContext,
                         [[maybe_unused]] ur_native_handle_t *phNativeContext) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urContextCreateWithNativeHandle(
    [[maybe_unused]] ur_native_handle_t hNativeContext,
    [[maybe_unused]] uint32_t, [[maybe_unused]] const ur_device_handle_t *,
    [[maybe_unused]] const ur_context_native_properties_t *,
    [[maybe_unused]] ur_context_handle_t *phContext) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urContextSetExtendedDeleter(
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] ur_context_extended_deleter_t pfnDeleter,
    [[maybe_unused]] void *pUserData) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
