# Install script for directory: D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Rooster")
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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/mingw64/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-build/libfmtd.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/fmt" TYPE FILE FILES
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/args.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/chrono.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/color.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/compile.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/core.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/format.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/format-inl.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/os.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/ostream.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/printf.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/ranges.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/std.h"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-src/include/fmt/xchar.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-build/fmt-config.cmake"
    "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-build/fmt-config-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets.cmake"
         "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-build/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-build/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-build/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "D:/Sandbox/VSCodeSeries/2.CMakeWithKits/build/_deps/fmt-build/fmt.pc")
endif()

