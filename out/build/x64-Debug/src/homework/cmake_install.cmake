# Install script for directory: C:/Users/9419322/source/repos/acc-cosc-1337-spring-2020-arkin1987/src/homework

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/9419322/Source/Repos/acc-cosc-1337-spring-2020-arkin1987/out/install/x64-Debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/9419322/source/repos/acc-cosc-1337-spring-2020-arkin1987/out/build/x64-Debug/src/homework/01_expressions/cmake_install.cmake")
  include("C:/Users/9419322/source/repos/acc-cosc-1337-spring-2020-arkin1987/out/build/x64-Debug/src/homework/02_decisions/cmake_install.cmake")
  include("C:/Users/9419322/source/repos/acc-cosc-1337-spring-2020-arkin1987/out/build/x64-Debug/src/homework/03_iteration/cmake_install.cmake")
  include("C:/Users/9419322/source/repos/acc-cosc-1337-spring-2020-arkin1987/out/build/x64-Debug/src/homework/04_vectors/cmake_install.cmake")
  include("C:/Users/9419322/source/repos/acc-cosc-1337-spring-2020-arkin1987/out/build/x64-Debug/src/homework/tic_tac_toe/cmake_install.cmake")

endif()

