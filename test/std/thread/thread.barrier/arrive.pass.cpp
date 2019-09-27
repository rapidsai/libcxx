//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// UNSUPPORTED: libcpp-has-no-threads

// <barrier>

#include <barrier>

#include "test_macros.h"

int main(int, char**)
{
  std::barrier b(3);
  auto tok = b.arrive();
  for(int i = 0; i < 2; ++i)
    std::thread([&](){ 
      (void)b.arrive();
    }).detach();
  b.wait(std::move(tok));
  return 0;
}
