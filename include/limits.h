/*
 * Copyright © 2018-NOW Synapse Research Innovation
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

//! Number of bits for smallest object that is not a bit-field (byte)
#define CHAR_BIT 8
//! Minimum value for an object of type <tt>signed char</tt>
#define SCHAR_MIN (-127)  // -(2^7 - 1)
//! Maximum value for an object of type <tt>signed char</tt>
#define SCHAR_MAX (+127)  // 2^7 - 1
//! Maximum value for an object of type <tt>unsigned char</tt>
#define UCHAR_MAX 255  // 2^8 - 1
//! Minimum value for an object of type <tt>char</tt>
#define CHAR_MIN 0
//! Maximum value for an object of type <tt>char</tt>
#define CHAR_MAX UCHAR_MAX
//! Maximum number of bytes in a multibyte character, for any supported locale
#define MB_LEN_MAX 1
//! Minimum value for an object of type <tt>short int</tt>
#define SHRT_MIN (-32767)  // -(2^15 - 1)
//! Maximum value for an object of type <tt>short int</tt>
#define SHRT_MAX (+32767)  // 2^15 - 1
//! Maximum value for an object of type <tt>unsigned short int</tt>
#define USHRT_MAX 65535U  // 2^16 - 1
//! Minimum value for an object of type <tt>int</tt>
#define INT_MIN (-32767)
//! Maximum value for an object of type <tt>int</tt>
#define INT_MAX (+32767)
//! Maximum value for an object of type <tt>unsigned int</tt>
#define UINT_MAX 65535
//! Minimum value for an object of type <tt>long int</tt>
#define LONG_MIN (-2147483647L)  // -(2^31 - 1)
//! Maximum value for an object of type <tt>long int</tt>
#define LONG_MAX (+2147483647L)  // 2^31 - 1
//! Maximum value for an object of type <tt>unsigned long int</tt>
#define ULONG_MAX 4294967295UL  // 2^32 - 1
//! Minimum value for an object of type <tt>long long int</tt>
#define LLONG_MIN (-9223372036854775807LL)  // -(2^63 - 1)
//! Maximum value for an object of type <tt>long long int</tt>
#define LLONG_MAX (+9223372036854775807LL)  // 2^63 - 1
//! Maximum value for an object of type <tt>unsigned long long int</tt>
#define ULLONG_MAX 18446744073709551615ULL  // 2^64 - 1
