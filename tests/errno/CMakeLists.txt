### CMakeLists.txt -- for neoc
 #
 #      Copyright © 2018-NOW Synapse Research Innovation
 #      Created 16-Jan-2018 by Srikanth Anantharam
 ##

# add errno test application
add_executable(test_errno test_errno.c)
target_link_libraries(test_errno ${PROJECT_NAME})
add_test(test_errno ${EXECUTABLE_OUTPUT_PATH}/test_errno)
