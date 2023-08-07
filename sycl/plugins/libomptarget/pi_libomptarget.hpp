//===--------- pi_libomptarget.hpp - libomptarget Plugin --------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===-----------------------------------------------------------------===//

#ifndef PI_LIBOMPTARGET_HPP
#define PI_LIBOMPTARGET_HPP

#include <climits>
#include <regex>
#include <string>

// Share code between the PI Plugin and UR Adapter
#include <pi2ur.hpp>

// This version should be incremented for any change made to this file or its
// corresponding .cpp file.
#define _PI_LIBOMPTARGET_PLUGIN_VERSION 1

#define _PI_LIBOMPTARGET_PLUGIN_VERSION_STRING                                 \
  _PI_PLUGIN_VERSION_STRING(_PI_LIBOMPTARGET_PLUGIN_VERSION)

#endif // PI_LIBOMPTARGET_HPP
