//===--------- platform.cpp - Libomptarget Adapter --------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//

#include "common.hpp"

UR_DLLEXPORT ur_result_t UR_APICALL urPlatformGetInfo(
    [[maybe_unused]] ur_platform_handle_t hPlatform,
    [[maybe_unused]] ur_platform_info_t propName,
    [[maybe_unused]] size_t propSize, [[maybe_unused]] void *pPropValue,
    [[maybe_unused]] size_t *pSizeRet) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_DLLEXPORT ur_result_t UR_APICALL
urPlatformGetApiVersion([[maybe_unused]] ur_platform_handle_t hPlatform,
                        [[maybe_unused]] ur_api_version_t *pVersion) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urPlatformGet([[maybe_unused]] ur_adapter_handle_t *, [[maybe_unused]] uint32_t,
              [[maybe_unused]] uint32_t NumEntries,
              [[maybe_unused]] ur_platform_handle_t *phPlatforms,
              [[maybe_unused]] uint32_t *pNumPlatforms) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urPlatformGetNativeHandle(
    [[maybe_unused]] ur_platform_handle_t hPlatform,
    [[maybe_unused]] ur_native_handle_t *phNativePlatform) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL urPlatformCreateWithNativeHandle(
    [[maybe_unused]] ur_native_handle_t hNativePlatform,
    [[maybe_unused]] const ur_platform_native_properties_t *,
    [[maybe_unused]] ur_platform_handle_t *phPlatform) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}

UR_APIEXPORT ur_result_t UR_APICALL
urPlatformGetBackendOption([[maybe_unused]] ur_platform_handle_t,
                           [[maybe_unused]] const char *pFrontendOption,
                           [[maybe_unused]] const char **ppPlatformOption) {
  omptarget_adapter::die("Feature is not implemented");
  return UR_RESULT_ERROR_UNSUPPORTED_FEATURE;
}
