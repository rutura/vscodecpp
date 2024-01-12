/*
    . Using cmake presets with c++20 modules
    . On windows with visual studio, be sure to explicitly use the visual studio generator.
    . Pros:
        . Easy to set up a debugger.
        . Relatively easy to bring in third party dependencies through FetchContent. 
       . Easy to share project specific settings among developers and IDEs.

    . Cons:
        . Requires CMake to be installed on the system.
        . CMake 3.28 or higher is required.
        . Currently works out of the box for MSVC and Clang16+.
*/

#include <fmt/format.h>
import calculator;

int main() {
  int value{5};
  int count{10};
  Calculator calc;
  auto result = calc.add(value, count);

  fmt::println("The value is: {}", value);
  fmt::println("The sky is blue my friend!");
  fmt::println("The result is: {}", result);
  return 0;
}