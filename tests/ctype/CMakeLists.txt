### CMakeLists.txt -- for neoc
 #
 #      Copyright © 2018-NOW Srikanth Anantharam
 #      Created 14-Jan-2018 by Srikanth Anantharam
 ##

# add ctype test application
add_executable(test_ctype test_ctype.c
  test_isalnum.c
  test_isalpha.c
  test_isblank.c
  test_iscntrl.c
  test_isdigit.c
  test_isgraph.c
  test_islower.c
  test_isprint.c
  test_ispunct.c
  test_isspace.c
  test_isupper.c
  test_isxdigit.c
  test_tolower.c
  test_toupper.c
)
target_link_libraries(test_ctype ${PROJECT_NAME})
add_test(test_ctype ${EXECUTABLE_OUTPUT_PATH}/test_ctype)
