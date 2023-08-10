//===--------- queue.cpp - Libomptarget Adapter ---------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//

#include "common.hpp"

UR_APIEXPORT ur_result_t UR_APICALL
urQueueCreate([[maybe_unused]] ur_context_handle_t hContext,
              [[maybe_unused]] ur_device_handle_t hDevice,
              [[maybe_unused]] const ur_queue_properties_t *pProperties,
              [[maybe_unused]] ur_queue_handle_t *phQueue) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urQueueGetInfo(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_queue_info_t propName, [[maybe_unused]] size_t propSize,
    [[maybe_unused]] void *pPropValue, [[maybe_unused]] size_t *pPropSizeRet) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urQueueGetNativeHandle([[maybe_unused]] ur_queue_handle_t hQueue,
                       [[maybe_unused]] ur_queue_native_desc_t *,
                       [[maybe_unused]] ur_native_handle_t *phNativeQueue) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urQueueCreateWithNativeHandle(
    [[maybe_unused]] ur_native_handle_t hNativeQueue,
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] ur_device_handle_t hDevice,
    [[maybe_unused]] const ur_queue_native_properties_t *pProperties,
    [[maybe_unused]] ur_queue_handle_t *phQueue) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urQueueFinish([[maybe_unused]] ur_queue_handle_t hQueue) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urQueueFlush([[maybe_unused]] ur_queue_handle_t hQueue) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urQueueRetain([[maybe_unused]] ur_queue_handle_t hQueue) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urQueueRelease([[maybe_unused]] ur_queue_handle_t hQueue) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
