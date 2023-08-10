//===--------- enqueue.cpp - Libomptarget Adapter ---------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//

#include "common.hpp"

UR_APIEXPORT ur_result_t UR_APICALL
urEnqueueKernelLaunch([[maybe_unused]] ur_queue_handle_t hQueue,
                      [[maybe_unused]] ur_kernel_handle_t hKernel,
                      [[maybe_unused]] uint32_t workDim,
                      [[maybe_unused]] const size_t *pGlobalWorkOffset,
                      [[maybe_unused]] const size_t *pGlobalWorkSize,
                      [[maybe_unused]] const size_t *pLocalWorkSize,
                      [[maybe_unused]] uint32_t numEventsInWaitList,
                      [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
                      [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urEnqueueEventsWait([[maybe_unused]] ur_queue_handle_t hQueue,
                    [[maybe_unused]] uint32_t numEventsInWaitList,
                    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
                    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueEventsWaitWithBarrier(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemBufferRead(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hBuffer,
    [[maybe_unused]] bool blockingRead, [[maybe_unused]] size_t offset,
    [[maybe_unused]] size_t size, [[maybe_unused]] void *pDst,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemBufferWrite(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hBuffer,
    [[maybe_unused]] bool blockingWrite, [[maybe_unused]] size_t offset,
    [[maybe_unused]] size_t size, [[maybe_unused]] const void *pSrc,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemBufferReadRect(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hBuffer,
    [[maybe_unused]] bool blockingRead,
    [[maybe_unused]] ur_rect_offset_t bufferOrigin,
    [[maybe_unused]] ur_rect_offset_t hostOrigin,
    [[maybe_unused]] ur_rect_region_t region,
    [[maybe_unused]] size_t bufferRowPitch,
    [[maybe_unused]] size_t bufferSlicePitch,
    [[maybe_unused]] size_t hostRowPitch,
    [[maybe_unused]] size_t hostSlicePitch, [[maybe_unused]] void *pDst,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemBufferWriteRect(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hBuffer,
    [[maybe_unused]] bool blockingWrite,
    [[maybe_unused]] ur_rect_offset_t bufferOrigin,
    [[maybe_unused]] ur_rect_offset_t hostOrigin,
    [[maybe_unused]] ur_rect_region_t region,
    [[maybe_unused]] size_t bufferRowPitch,
    [[maybe_unused]] size_t bufferSlicePitch,
    [[maybe_unused]] size_t hostRowPitch,
    [[maybe_unused]] size_t hostSlicePitch, [[maybe_unused]] void *pSrc,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemBufferCopy(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hBufferSrc,
    [[maybe_unused]] ur_mem_handle_t hBufferDst,
    [[maybe_unused]] size_t srcOffset, [[maybe_unused]] size_t dstOffset,
    [[maybe_unused]] size_t size, [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemBufferCopyRect(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hBufferSrc,
    [[maybe_unused]] ur_mem_handle_t hBufferDst,
    [[maybe_unused]] ur_rect_offset_t srcOrigin,
    [[maybe_unused]] ur_rect_offset_t dstOrigin,
    [[maybe_unused]] ur_rect_region_t region,
    [[maybe_unused]] size_t srcRowPitch, [[maybe_unused]] size_t srcSlicePitch,
    [[maybe_unused]] size_t dstRowPitch, [[maybe_unused]] size_t dstSlicePitch,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemBufferFill(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hBuffer,
    [[maybe_unused]] const void *pPattern, [[maybe_unused]] size_t patternSize,
    [[maybe_unused]] size_t offset, [[maybe_unused]] size_t size,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemImageRead(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hImage, [[maybe_unused]] bool blockingRead,
    [[maybe_unused]] ur_rect_offset_t origin,
    [[maybe_unused]] ur_rect_region_t region, [[maybe_unused]] size_t rowPitch,
    [[maybe_unused]] size_t slicePitch, [[maybe_unused]] void *pDst,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemImageWrite(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hImage,
    [[maybe_unused]] bool blockingWrite,
    [[maybe_unused]] ur_rect_offset_t origin,
    [[maybe_unused]] ur_rect_region_t region, [[maybe_unused]] size_t rowPitch,
    [[maybe_unused]] size_t slicePitch, [[maybe_unused]] void *pSrc,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urEnqueueMemImageCopy([[maybe_unused]] ur_queue_handle_t hQueue,
                      [[maybe_unused]] ur_mem_handle_t hImageSrc,
                      [[maybe_unused]] ur_mem_handle_t hImageDst,
                      [[maybe_unused]] ur_rect_offset_t srcOrigin,
                      [[maybe_unused]] ur_rect_offset_t dstOrigin,
                      [[maybe_unused]] ur_rect_region_t region,
                      [[maybe_unused]] uint32_t numEventsInWaitList,
                      [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
                      [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemBufferMap(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hBuffer, [[maybe_unused]] bool blockingMap,
    [[maybe_unused]] ur_map_flags_t mapFlags, [[maybe_unused]] size_t offset,
    [[maybe_unused]] size_t size, [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent,
    [[maybe_unused]] void **ppRetMap) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueMemUnmap(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_mem_handle_t hMem, [[maybe_unused]] void *pMappedPtr,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueDeviceGlobalVariableWrite(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_program_handle_t hProgram,
    [[maybe_unused]] const char *name, [[maybe_unused]] bool blockingWrite,
    [[maybe_unused]] size_t count, [[maybe_unused]] size_t offset,
    [[maybe_unused]] const void *pSrc,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueDeviceGlobalVariableRead(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_program_handle_t hProgram,
    [[maybe_unused]] const char *name, [[maybe_unused]] bool blockingRead,
    [[maybe_unused]] size_t count, [[maybe_unused]] size_t offset,
    [[maybe_unused]] void *pDst, [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueReadHostPipe(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_program_handle_t hProgram,
    [[maybe_unused]] const char *pipe_symbol, [[maybe_unused]] bool blocking,
    [[maybe_unused]] void *pDst, [[maybe_unused]] size_t size,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urEnqueueWriteHostPipe(
    [[maybe_unused]] ur_queue_handle_t hQueue,
    [[maybe_unused]] ur_program_handle_t hProgram,
    [[maybe_unused]] const char *pipe_symbol, [[maybe_unused]] bool blocking,
    [[maybe_unused]] void *pSrc, [[maybe_unused]] size_t size,
    [[maybe_unused]] uint32_t numEventsInWaitList,
    [[maybe_unused]] const ur_event_handle_t *phEventWaitList,
    [[maybe_unused]] ur_event_handle_t *phEvent) {
  OMPT_DIE("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
