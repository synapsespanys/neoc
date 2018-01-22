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
 * \file test_ctype.c
 * 
 * \author Srikanth Anantharam
 * \date 18-01-2018
 * \copyright Apache License
 */

#include <assert.h>

extern int test_isalnum();
extern int test_isalpha();
extern int test_isblank();
extern int test_iscntrl();
extern int test_isdigit();
extern int test_isgraph();
extern int test_islower();
extern int test_isprint();
extern int test_ispunct();
extern int test_isspace();
extern int test_isupper();
extern int test_isxdigit();
extern int test_tolower();
extern int test_toupper();

int main() {
  assert(test_isalnum() == 0);
  assert(test_isalpha() == 0);
  assert(test_isblank() == 0);
  assert(test_iscntrl() == 0);
  assert(test_isdigit() == 0);
  assert(test_isgraph() == 0);
  assert(test_islower() == 0);
  assert(test_isprint() == 0);
  assert(test_ispunct() == 0);
  assert(test_isspace() == 0);
  assert(test_isupper() == 0);
  assert(test_isxdigit() == 0);
  assert(test_tolower() == 0);
  assert(test_toupper() == 0);

  return 0;
}
