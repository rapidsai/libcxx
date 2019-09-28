//===------------------------- barrier.cpp ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_HAS_NO_THREADS
#include "barrier"

_LIBCPP_BEGIN_NAMESPACE_STD

#if !defined(_LIBCPP_HAS_NO_TREE_BARRIER) && !defined(_LIBCPP_HAS_NO_THREAD_FAVORITE_HASH)

thread_local ptrdiff_t __libcpp_thread_favorite_hash = 0;
//    hash<__thread_id>()(this_thread::get_id());

#endif

_LIBCPP_END_NAMESPACE_STD

#endif //_LIBCPP_HAS_NO_THREADS
