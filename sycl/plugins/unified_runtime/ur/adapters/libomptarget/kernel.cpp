//===----------- kernel.cpp - Libomptarget Adapter ---------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-------------------------------------------------------------------===//
#include "common.hpp"

UR_APIEXPORT ur_result_t UR_APICALL
urKernelCreate([[maybe_unused]] ur_program_handle_t hProgram,
               [[maybe_unused]] const char *pKernelName,
               [[maybe_unused]] ur_kernel_handle_t *phKernel) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urKernelSetArgValue(
    [[maybe_unused]] ur_kernel_handle_t hKernel,
    [[maybe_unused]] uint32_t argIndex, [[maybe_unused]] size_t argSize,
    [[maybe_unused]] const ur_kernel_arg_value_properties_t *,
    [[maybe_unused]] const void *pArgValue) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urKernelGetInfo(
    [[maybe_unused]] ur_kernel_handle_t hKernel,
    [[maybe_unused]] ur_kernel_info_t propName,
    [[maybe_unused]] size_t propSize, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urKernelGetGroupInfo(
    [[maybe_unused]] ur_kernel_handle_t hKernel,
    [[maybe_unused]] ur_device_handle_t hDevice,
    [[maybe_unused]] ur_kernel_group_info_t propName,
    [[maybe_unused]] size_t propSize, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urKernelGetSubGroupInfo(
    [[maybe_unused]] ur_kernel_handle_t hKernel,
    [[maybe_unused]] ur_device_handle_t hDevice,
    [[maybe_unused]] ur_kernel_sub_group_info_t propName,
    [[maybe_unused]] size_t, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urKernelRetain([[maybe_unused]] ur_kernel_handle_t hKernel) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urKernelRelease([[maybe_unused]] ur_kernel_handle_t hKernel) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urKernelSetExecInfo([[maybe_unused]] ur_kernel_handle_t hKernel,
                    [[maybe_unused]] ur_kernel_exec_info_t propName,
                    [[maybe_unused]] size_t propSize,
                    [[maybe_unused]] const ur_kernel_exec_info_properties_t *,
                    [[maybe_unused]] const void *pPropValue) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urKernelSetArgPointer(
    [[maybe_unused]] ur_kernel_handle_t hKernel,
    [[maybe_unused]] uint32_t argIndex,
    [[maybe_unused]] const ur_kernel_arg_pointer_properties_t *,
    [[maybe_unused]] const void *pArgValue) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
UR_APIEXPORT ur_result_t UR_APICALL
urKernelGetNativeHandle([[maybe_unused]] ur_kernel_handle_t hKernel,
                        [[maybe_unused]] ur_native_handle_t *phNativeKernel) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urKernelCreateWithNativeHandle(
    [[maybe_unused]] ur_native_handle_t hNativeKernel,
    [[maybe_unused]] ur_context_handle_t, [[maybe_unused]] ur_program_handle_t,
    [[maybe_unused]] const ur_kernel_native_properties_t *,
    [[maybe_unused]] ur_kernel_handle_t *phKernel) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urKernelSetArgMemObj(
    [[maybe_unused]] ur_kernel_handle_t hKernel,
    [[maybe_unused]] uint32_t argIndex,
    [[maybe_unused]] const ur_kernel_arg_mem_obj_properties_t *,
    [[maybe_unused]] ur_mem_handle_t hArgValue) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urKernelSetArgSampler(
    [[maybe_unused]] ur_kernel_handle_t hKernel,
    [[maybe_unused]] uint32_t argIndex,
    [[maybe_unused]] const ur_kernel_arg_sampler_properties_t *,
    [[maybe_unused]] ur_sampler_handle_t hArgValue) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
