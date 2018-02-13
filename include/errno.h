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
 * \file errno.h
 * \brief Errors.
 * 
 * \author Srikanth Anantharam
 * \date 14-01-2018
 * \copyright Apache License
 */

#pragma once

#ifdef _WIN32
  #define EDOM   33  //!< represents domain error
  #define EILSEQ 42  //!< represents encoding error
  #define ERANGE 34  //!< represents overflow error
#elif __linux__
  #define EDOM   33  //!< represents domain error
  #define EILSEQ 84  //!< represents encoding error
  #define ERANGE 34  //!< represents overflow error
#elif __APPLE__
  #define EDOM   33  //!< represents domain error
  #define EILSEQ 92  //!< represents encoding error
  #define ERANGE 34  //!< represents overflow error
#endif

#if defined(__STDC_WANT_LIB_EXT1__) && (__STDC_WANT_LIB_EXT1__ == 1)

  /*! Type that holds the values of error numbers
   */
  typedef int errno_t;

  // \cond
  errno_t * _errno(void);
  // \endcond

#else

  // \cond
  int * _errno(void);
  // \endcond

#endif

/**
 * \brief stores the number of the last error
 */
#define errno (*_errno())
