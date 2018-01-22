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
 * \file test_errno.c
 * 
 * \author Srikanth Anantharam
 * \date 18-01-2018
 * \copyright Apache License
 */

#include <stdbool.h>
#include <assert.h>
#include <errno.h>

int main() {
  errno = 0;
  assert(errno == 0);

  errno = EDOM;
  assert(errno == EDOM);

  errno = EILSEQ;
  assert(errno == EILSEQ);

  errno = ERANGE;
  assert(errno == ERANGE);

  errno = 0;
  assert(errno == 0);

  return 0;
}
