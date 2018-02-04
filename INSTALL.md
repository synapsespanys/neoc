# neoc — An alternative implementation of the 'C Standard Library'

## Prerequisites

- [Git](https://git-scm.com/download/)
- [CMake](http://www.cmake.org/download/)
- Appropriate compiler toochain for the platform.
  - [GCC](https://gcc.gnu.org/) for Linux
  - [Visual Studio](https://www.visualstudio.com/) for Windows
  - [Xcode](https://developer.apple.com/xcode/) for macOS
- [Doxygen](http://www.doxygen.org/) (optional)

### Installing the prerequisites on Ubuntu Linux

`sudo apt-get install git cmake-gui build-essential doxygen graphviz`

## Build and test the neoc library

- `cd build`
- `cmake .. -DCMAKE_BUILD_TYPE=Debug`
- `cmake --build . --config Debug --target all`
- `cmake --build . --config Debug --target test`

## Install the neoc library

- `cd build`
- `cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local`
- `cmake --build . --config Release --target all`
- `cmake --build . --config Release --target install`

## Build the neoc library package for distribution

- `cd build`
- `cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local`
- `cmake --build . --config Release --target all`
- `cmake --build . --config Release --target package`
