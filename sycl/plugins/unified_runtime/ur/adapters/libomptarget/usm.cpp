//===--------- usm.cpp - Libomptarget Adapter -------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//

#include "common.hpp"

UR_APIEXPORT ur_result_t UR_APICALL
urUSMHostAlloc([[maybe_unused]] ur_context_handle_t hContext,
               [[maybe_unused]] const ur_usm_desc_t *pUSMDesc,
               [[maybe_unused]] ur_usm_pool_handle_t,
               [[maybe_unused]] size_t size, [[maybe_unused]] void **ppMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urUSMDeviceAlloc([[maybe_unused]] ur_context_handle_t hContext,
                 [[maybe_unused]] ur_device_handle_t hDevice,
                 [[maybe_unused]] const ur_usm_desc_t *pUSMDesc,
                 [[maybe_unused]] ur_usm_pool_handle_t,
                 [[maybe_unused]] size_t size, [[maybe_unused]] void **ppMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urUSMSharedAlloc([[maybe_unused]] ur_context_handle_t hContext,
                 [[maybe_unused]] ur_device_handle_t hDevice,
                 [[maybe_unused]] const ur_usm_desc_t *pUSMDesc,
                 [[maybe_unused]] ur_usm_pool_handle_t,
                 [[maybe_unused]] size_t size, [[maybe_unused]] void **ppMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urUSMFree([[maybe_unused]] ur_context_handle_t hContext,
          [[maybe_unused]] void *pMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueUSMFill(
    [[maybe_unused]] ur_queue_handle_t hQueue, [[maybe_unused]] void *ptr,
    [[maybe_unused]] size_t patternSize, [[maybe_unused]] const void *pPattern,
    [[maybe_unused]] size_t size, [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueUSMMemcpy(
    [[maybe_unused]] ur_queue_handle_t hQueue, [[maybe_unused]] bool blocking,
    [[maybe_unused]] void *pDst, [[maybe_unused]] const void *pSrc,
    [[maybe_unused]] size_t size, [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueUSMPrefetch(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] const void *pMem, [[maybe_unused]] size_t size,
    [[maybe_unused]] ur_usm_migration_flags_t flags,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueUSMAdvise(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] const void *pMem, [[maybe_unused]] size_t size,
    [[maybe_unused]] ur_usm_advice_flags_t advice,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueUSMFill2D(
    [[maybe_unused]] ur_queue_handle_t hQueue, [[maybe_unused]] void *pMem,
    [[maybe_unused]] size_t pitch, [[maybe_unused]] size_t patternSize,
    [[maybe_unused]] const void *pPattern, [[maybe_unused]] size_t width,
    [[maybe_unused]] size_t height,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueUSMMemcpy2D(
    [[maybe_unused]] ur_queue_handle_t hQueue, [[maybe_unused]] bool blocking,
    [[maybe_unused]] void *pDst, [[maybe_unused]] size_t dstPitch,
    [[maybe_unused]] const void *pSrc, [[maybe_unused]] size_t srcPitch,
    [[maybe_unused]] size_t width, [[maybe_unused]] size_t height,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urUSMGetMemAllocInfo(
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] const void *pMem,
    [[maybe_unused]] ur_usm_alloc_info_t propName,
    [[maybe_unused]] size_t propSize, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urUSMImportExp([[maybe_unused]] ur_context_handle_t Context,
               [[maybe_unused]] void *HostPtr, [[maybe_unused]] size_t Size) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urUSMReleaseExp([[maybe_unused]] ur_context_handle_t Context,
                [[maybe_unused]] void *HostPtr) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
