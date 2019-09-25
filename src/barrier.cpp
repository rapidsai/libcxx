//===------------------------- barrier.cpp ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_HAS_NO_THREADS
#include "simt/barrier"

_LIBCPP_BEGIN_NAMESPACE_STD

#if defined(_LIBCPP_BARRIER_BUTTERFLY) && !defined(_LIBCPP_HAS_NO_THREAD_FAVORITE_HASH)

thread_local size_t __libcpp_thread_favorite_hash =
    static_cast<size_t>(__libcpp_thread_get_current_id());

#endif

_LIBCPP_END_NAMESPACE_STD

#endif //_LIBCPP_HAS_NO_THREADS
