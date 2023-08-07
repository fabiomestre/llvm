//===--------- program.cpp - Libomptarget Adapter ---------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-------------------------------------------------------------------===//

#include "common.hpp"

UR_APIEXPORT ur_result_t UR_APICALL urProgramCreateWithIL(
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] const void *pIL, [[maybe_unused]] size_t length,
    [[maybe_unused]] const ur_program_properties_t *,
    [[maybe_unused]] ur_program_handle_t *phProgram) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urProgramCreateWithBinary(
    [[maybe_unused]] ur_context_handle_t hContext,
    [[maybe_unused]] ur_device_handle_t hDevice, [[maybe_unused]] size_t size,
    [[maybe_unused]] const uint8_t *pBinary,
    [[maybe_unused]] const ur_program_properties_t *,
    [[maybe_unused]] ur_program_handle_t *phProgram) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urProgramCompile([[maybe_unused]] ur_context_handle_t hContext,
                 [[maybe_unused]] ur_program_handle_t hProgram,
                 [[maybe_unused]] const char *pOptions) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urProgramGetInfo(
    [[maybe_unused]] ur_program_handle_t hProgram,
    [[maybe_unused]] ur_program_info_t propName,
    [[maybe_unused]] size_t propSize, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urProgramBuild([[maybe_unused]] ur_context_handle_t hContext,
               [[maybe_unused]] ur_program_handle_t hProgram,
               [[maybe_unused]] const char *pOptions) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urProgramLink([[maybe_unused]] ur_context_handle_t hContext,
              [[maybe_unused]] uint32_t count,
              [[maybe_unused]] const ur_program_handle_t *phPrograms,
              [[maybe_unused]] const char *pOptions,
              [[maybe_unused]] ur_program_handle_t *phProgram) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urProgramGetBuildInfo(
    [[maybe_unused]] ur_program_handle_t hProgram,
    [[maybe_unused]] ur_device_handle_t hDevice,
    [[maybe_unused]] ur_program_build_info_t propName,
    [[maybe_unused]] size_t propSize, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urProgramRetain([[maybe_unused]] ur_program_handle_t hProgram) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urProgramRelease([[maybe_unused]] ur_program_handle_t hProgram) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urProgramGetNativeHandle([[maybe_unused]] ur_program_handle_t hProgram,
                         [[maybe_unused]] ur_native_handle_t *phNativeProgram) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urProgramCreateWithNativeHandle(
    [[maybe_unused]] ur_native_handle_t hNativeProgram,
    [[maybe_unused]] ur_context_handle_t,
    [[maybe_unused]] const ur_program_native_properties_t *,
    [[maybe_unused]] ur_program_handle_t *phProgram) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urProgramSetSpecializationConstants(
    [[maybe_unused]] ur_program_handle_t hProgram,
    [[maybe_unused]] uint32_t count,
    [[maybe_unused]] const ur_specialization_constant_info_t *pSpecConstants) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urProgramGetFunctionPointer([[maybe_unused]] ur_device_handle_t hDevice,
                            [[maybe_unused]] ur_program_handle_t hProgram,
                            [[maybe_unused]] const char *pFunctionName,
                            [[maybe_unused]] void **ppFunctionPointer) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
