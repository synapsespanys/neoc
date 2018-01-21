### CMakeLists.txt -- for neoc
 #
 #      Copyright © 2018-NOW Srikanth Anantharam
 #      Created 14-Jan-2018 by Srikanth Anantharam
 ##

# add the libneoc library targets
add_subdirectory(ctype)
add_subdirectory(errno)

# link the library targets to libneoc
add_library( ${PROJECT_NAME}
  $<TARGET_OBJECTS:ctype>
  $<TARGET_OBJECTS:errno>
)

# add the libneoc library install target
if(BUILD_SHARED_LIBS)
  install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION lib)
else()
  install(TARGETS ${PROJECT_NAME} ARCHIVE DESTINATION lib)
endif()
