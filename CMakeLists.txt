### CMakeLists.txt -- for neoc
 #
 #      Copyright © 2018-NOW Synapse Research Innovation
 #      Created 14-Jan-2018 by Srikanth Anantharam
 ##

cmake_minimum_required(VERSION 3.9)
file(STRINGS "version.txt" VERSION)
project(
  neoc
  VERSION ${VERSION}
  DESCRIPTION 
    "\"An alternative implementation of the \"\"'C Standard Library'\"\""
  LANGUAGES C
)
if(UNIX)
  set(PLATFORM "__linux__")
  set(NEOC_COMPILE_FLAGS "-nostdinc -Wall")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${NEOC_COMPILE_FLAGS}")
elseif(WIN32)
  set(PLATFORM "_WIN32")
  set(NEOC_COMPILE_FLAGS "/NODEFAULTLIB /X")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${NEOC_COMPILE_FLAGS}")
elseif(APPLE)
  set(PLATFORM "__APPLE__")
  set(NEOC_COMPILE_FLAGS "-nostdinc -Wall")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${NEOC_COMPILE_FLAGS}")
endif()
enable_testing()

# first we can indicate the documentation build as an option and set it to ON by
# default
option(BUILD_DOC "Build documentation" ON)
find_package(Doxygen)
if (DOXYGEN_FOUND)
  # set input and output files
  set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
  set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

  # request to configure the file
  configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
  message("Doxygen build started")

  # note the option ALL which allows to build the docs together with the
  # application
  add_custom_target(doc ALL
    COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Generating API documentation with Doxygen"
    VERBATIM
  )

  # add install targets for html documentation and manpages
  install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/doc/html
    DESTINATION share/doc/${PROJECT_NAME})
  install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/doc/man DESTINATION share)
else (DOXYGEN_FOUND)
  message("Doxygen need to be installed to generate the doxygen documentation")
endif (DOXYGEN_FOUND)

# include the libneoc header directory
include_directories ("${PROJECT_SOURCE_DIR}/include")
# add libneoc source directory
add_subdirectory (src)
# add libneoc header directory
add_subdirectory (include)
# add libneoc tests directory
add_subdirectory (tests)

# set the install prefix
set(CMAKE_INSTALL_PREFIX ../install)
# add the install targets
install(FILES LICENSE.txt README.md DESTINATION .)

# add the installer target
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
include(CPack)
