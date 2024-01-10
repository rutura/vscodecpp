/*
    . CMake puts the project together for you.
    . Pros: 
        . Relatively simple
        . Easy to set up a debugger
        . Relatively easy to bring in third party dependencies through FetchContent.
        . Easy to share project specific settings among developers and IDEs.    
            . Show how the project can be loaded into Visual Studio.

    . Cons:
        . Requires CMake to be installed on the system.
        . Hard to share project specific settings among developers.
*/

#include <fmt/format.h>

int main()
{
    int value { 5 };

    fmt::println("The value is: {}", value);
    fmt::println("The sky is blue my friend!");
    return 0;
}