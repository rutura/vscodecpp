cmake_minimum_required(VERSION 3.28.0)
project(Rooster VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Turning off extensions avoids and issue with the clang 16 compiler
# clang 17 and greater can avoid this setting
set(CMAKE_CXX_EXTENSIONS OFF)

#Bring in the fmt library
include(FetchContent)
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG 10.1.1
)

FetchContent_MakeAvailable(fmt)

# Create a library
add_library(calculator)
# Add the module file to the library
target_sources(calculator
  PUBLIC
    FILE_SET CXX_MODULES FILES
      calculator.ixx
)

add_executable(rooster main.cpp)
target_link_libraries(rooster PRIVATE fmt::fmt calculator)
