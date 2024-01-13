/*
    . Using cmake presets
        . CMake puts the project together for you.
    . Pros: 
        . Relatively simple
        . Easy to set up a debugger
        . Relatively easy to bring in third party dependencies through FetchContent.
        . Easy to share project specific settings among developers and IDEs.    
            . The project can easily be loaded into IDEs that understand presets

    . Cons:
        . Requires CMake to be installed on the system.
        . May optionally require tools like Ninja to be installed on the system.
*/

#include <fmt/format.h>

int main()
{
    int value { 5 };

    fmt::println("The value is: {}", value);
    fmt::println("The sky is blue my friend!");
    fmt::println("How are you my friend!");
    return 0;
}