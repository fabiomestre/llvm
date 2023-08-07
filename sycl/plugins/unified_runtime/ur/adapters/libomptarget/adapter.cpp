//===--------- adapter.cpp - Libomptarget Adapter --------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//

#include "common.hpp"
#include <omptargetplugin.h>

UR_APIEXPORT ur_result_t UR_APICALL
urInit([[maybe_unused]] ur_device_init_flags_t,
       [[maybe_unused]] ur_loader_config_handle_t) {

  __tgt_rtl_init_plugin();
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urTearDown([[maybe_unused]] void *) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urAdapterGet([[maybe_unused]] uint32_t NumEntries,
             [[maybe_unused]] ur_adapter_handle_t *phAdapters,
             [[maybe_unused]] uint32_t *pNumAdapters) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urAdapterRetain([[maybe_unused]] ur_adapter_handle_t) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urAdapterRelease([[maybe_unused]] ur_adapter_handle_t) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urAdapterGetLastError(
    [[maybe_unused]] ur_adapter_handle_t,
    [[maybe_unused]] const char **ppMessage, [[maybe_unused]] int32_t *pError) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urAdapterGetInfo(
    [[maybe_unused]] ur_adapter_handle_t,
    [[maybe_unused]] ur_adapter_info_t propName,
    [[maybe_unused]] size_t propSize, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pPropSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
