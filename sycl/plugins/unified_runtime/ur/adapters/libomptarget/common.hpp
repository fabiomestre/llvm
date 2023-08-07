//===--------- common.hpp - Libomptarget Adapter ----------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//
#pragma once

#include <sycl/detail/pi.h>
#include <ur/ur.hpp>

namespace omptarget_adapter {

[[noreturn]] void die(const char *Message);

} // namespace omptarget_adapter
