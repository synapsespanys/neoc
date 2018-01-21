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
 * \file test_isdigit.c
 * 
 * \author Srikanth Anantharam
 * \date 17-01-2018
 * \copyright Apache License
 */

#include <assert.h>
#include <stdbool.h>
#include <ctype.h>

int test_isdigit() {
  unsigned char digit[] = "0123456789";
  unsigned char non_digit[] = "\x00\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0E" \
    "\x0F\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1A\x1B\x1C\x1D\x1E\x1F !\"" \
    "#$%&'()*+,-./:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrs" \
    "tuvwxyz{|}~\x7F";

  for (unsigned int i=0; i < sizeof(digit)-1; i++) {
    assert(isdigit(digit[i]) == true);
  }

  for (unsigned int i=0; i < sizeof(non_digit)-1; i++) {
    assert(isdigit(non_digit[i]) == false);
  }

  return 0;
}
