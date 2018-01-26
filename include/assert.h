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
 * \file assert.h
 * \brief Diagnostics.
 * 
 * \author Srikanth Anantharam
 * \date 14-01-2018
 * \copyright Apache License
 */

#ifdef __GNUC__
  // \cond
  extern void __assert(const char * msg, const char * file, int line);
  // \endcond
#endif

/**
 * \brief aborts the program if \p expression evaluates to \c false at run-time.
 * 
 * \param[in] expression
 * \return void
 * 
 * The \c assert macro puts diagnostic tests into programs; it expands to a \c
 * void expression. When it is executed, if expression (which shall have a
 * scalar type) is \c false (that is, compares equal to \c 0), the \c assert
 * macro writes information about the particular call that failed (including the
 * text of the argument, the name of the source file, the source line number,
 * and the name of the enclosing function — the latter are respectively the
 * values of the preprocessing macros \c `__FILE__` and \c `__LINE__` and of the
 * identifier \c `__func__`) on the standard error stream in an
 * implementation-defined format. It then calls the \c abort function.
 */ 
#ifdef NDEBUG
  #define assert(ignore) ((void)0)
#else
  #define assert(expression) \
    (void)((expression) || (__assert(#expression, __FILE__, __LINE__), 0))
#endif

/**
 * \brief aborts the program if \p expression evaluates to \c false at
 *        compile-time.
 * \param[in] expression 
 * \param[in] message 
 */
#define static_assert _Static_assert
