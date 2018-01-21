# neoc — An alternative implementation of the 'C Standard Library'

## Prerequisites

- Git — https://git-scm.com/download/
- CMake — http://www.cmake.org/download/
- Appropriate compiler toochain for the platform.
  - GCC for Linux — https://gcc.gnu.org/
  - MSVC for Windows — https://www.visualstudio.com/
  - Xcode for macOS — https://developer.apple.com/xcode/
- Doxygen (optional) — http://www.doxygen.org/

### Installing the prerequisites on Ubuntu Linux

`sudo apt-get install git cmake-gui build-essential doxygen graphviz`

## Build the neoc library

- `cd build`
- `cmake .. -DCMAKE_BUILD_TYPE=Release`
- `cmake --build . --config Release`

## Test the neoc library

- `cd build`
- `cmake .. -DCMAKE_BUILD_TYPE=Debug`
- `cmake --build . --config Debug --target test`

## Install the neoc library

- `cd build`
- `cmake .. -DCMAKE_BUILD_TYPE=Release`
- `cmake --build . --config Release --target install`

## Build the neoc library package for distribution

- `cd build`
- `cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local`
- `cmake --build . --config Release --target package`
