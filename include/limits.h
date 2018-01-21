/*
 * Copyright 2018 Synapse Research Innovation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * \file limits.h
 * \brief Sizes of integer types.
 * 
 * \author Srikanth Anantharam
 * \date 14-01-2018
 * \copyright Apache License
 */

#pragma once

#define CHAR_BIT    8
#define SCHAR_MIN  -127  // -(2^7 - 1)
#define SCHAR_MAX  +127  // 2^7 - 1
#define UCHAR_MAX   255  // 2^8 - 1
#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX SCHAR_MAX
#define MB_LEN_MAX  1
#define SHRT_MIN -32767  // -(2^15 - 1)
#define SHRT_MAX +32767  // 2^15 - 1
#define USHRT_MAX 65535  // 2^16 - 1
#define INT_MIN SHRT_MIN
#define INT_MAX SHRT_MAX
#define UINT_MAX USHRT_MAX
#define LONG_MIN -2147483647  // -(2^31 - 1)
#define LONG_MAX +2147483647  // 2^31 - 1
#define ULONG_MAX 4294967295  // 2^32 - 1
#define LLONG_MIN -9223372036854775807  // -(2^63 - 1)
#define LLONG_MAX +9223372036854775807  // 2^63 - 1
#define ULLONG_MAX 18446744073709551615  // 2^64 - 1
