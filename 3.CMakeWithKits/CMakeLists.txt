cmake_minimum_required(VERSION 3.25.0)
project(Rooster VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Bring in the fmt library
include(FetchContent)
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG 10.1.1
)

FetchContent_MakeAvailable(fmt)

add_executable(Rooster main.cpp person.cpp)
target_link_libraries(Rooster PRIVATE fmt::fmt)
