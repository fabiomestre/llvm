//===--------- event.cpp - Libomptarget Adapter ----------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//

#include "common.hpp"

UR_APIEXPORT ur_result_t UR_APICALL urEventCreateWithNativeHandle(
    [[maybe_unused]] ur_native_handle_t hNativeEvent,
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] const ur_event_native_properties_t *pProperties,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urEventGetNativeHandle([[maybe_unused]] ur_event_handle_t hEvent,
                       [[maybe_unused]] ur_native_handle_t *phNativeEvent) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urEventRelease([[maybe_unused]] ur_event_handle_t hEvent) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urEventRetain([[maybe_unused]] ur_event_handle_t hEvent) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urEventWait([[maybe_unused]] uint32_t numEvents,
            [[maybe_unused]] const ur_event_handle_t *phEventWaitList) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEventGetInfo(
    [[maybe_unused]] ur_event_handle_t hEvent,
    [[maybe_unused]] ur_event_info_t propName, [[maybe_unused]] size_t propSize,
    [[maybe_unused]] void *pPropValue, [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEventGetProfilingInfo(
    [[maybe_unused]] ur_event_handle_t hEvent,
    [[maybe_unused]] ur_profiling_info_t propName,
    [[maybe_unused]] size_t propSize, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urEventSetCallback([[maybe_unused]] ur_event_handle_t hEvent,
                   [[maybe_unused]] ur_execution_info_t execStatus,
                   [[maybe_unused]] ur_event_callback_t pfnNotify,
                   [[maybe_unused]] void *pUserData) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
