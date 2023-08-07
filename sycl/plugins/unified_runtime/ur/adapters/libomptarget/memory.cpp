//===--------- memory.cpp - Libomptarget Adapter ----------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//

#include "common.hpp"

UR_APIEXPORT ur_result_t UR_APICALL urMemBufferCreate(
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] ur_mem_flags_t flags, [[maybe_unused]] size_t size,
    [[maybe_unused]] const ur_buffer_properties_t *pProperties,
    [[maybe_unused]] ur_mem_handle_t *phBuffer) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urMemImageCreate(
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] ur_mem_flags_t flags,
    [[maybe_unused]] const ur_image_format_t *pImageFormat,
    [[maybe_unused]] const ur_image_desc_t *pImageDesc,
    [[maybe_unused]] void *pHost, [[maybe_unused]] ur_mem_handle_t *phMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urMemBufferPartition([[maybe_unused]] ur_mem_handle_t hBuffer,
                     [[maybe_unused]] ur_mem_flags_t flags,
                     [[maybe_unused]] ur_buffer_create_type_t bufferCreateType,
                     [[maybe_unused]] const ur_buffer_region_t *pRegion,
                     [[maybe_unused]] ur_mem_handle_t *phMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urMemGetNativeHandle([[maybe_unused]] ur_mem_handle_t hMem,
                     [[maybe_unused]] ur_native_handle_t *phNativeMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urMemBufferCreateWithNativeHandle(
    [[maybe_unused]] ur_native_handle_t hNativeMem,
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] const ur_mem_native_properties_t *pProperties,
    [[maybe_unused]] ur_mem_handle_t *phMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urMemImageCreateWithNativeHandle(
    [[maybe_unused]] ur_native_handle_t hNativeMem,
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] const ur_image_format_t *pImageFormat,
    [[maybe_unused]] const ur_image_desc_t *pImageDesc,
    [[maybe_unused]] const ur_mem_native_properties_t *pProperties,
    [[maybe_unused]] ur_mem_handle_t *phMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urMemGetInfo(
    [[maybe_unused]] ur_mem_handle_t hMemory,
    [[maybe_unused]] ur_mem_info_t propName, [[maybe_unused]] size_t propSize,
    [[maybe_unused]] void *pPropValue, [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urMemImageGetInfo(
    [[maybe_unused]] ur_mem_handle_t hMemory,
    [[maybe_unused]] ur_image_info_t propName, [[maybe_unused]] size_t propSize,
    [[maybe_unused]] void *pPropValue, [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urMemRetain([[maybe_unused]] ur_mem_handle_t hMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urMemRelease([[maybe_unused]] ur_mem_handle_t hMem) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
