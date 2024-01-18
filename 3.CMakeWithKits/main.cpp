/*
    . CMake puts the project together for you.
    . Pros: 
        . Relatively simple
        . Easy to set up a debugger
        . Relatively easy to bring in third party dependencies through FetchContent.

    . Cons:
        . Requires CMake to be installed on the system.
        . Hard to share project specific settings among developers.
*/

#include <compare>
#include <iostream>
#include <set>
#include <fmt/format.h>

 
struct Point
{
    int x;
    int y;
    auto operator<=>(const Point&) const = default;
    // ... non-comparison functions ...
};
// compiler generates all six two-way comparison operators

int main()
{
    int value { 5 };
    Point pt1{1, 1}, pt2{1, 2};
    std::set<Point> s; // OK
    s.insert(pt1);     // OK
 
    std::cout << std::boolalpha
        << (pt1 == pt2) << ' '  // false; operator== is implicitly defaulted.
        << (pt1 != pt2) << ' '  // true
        << (pt1 <  pt2) << ' '  // true
        << (pt1 <= pt2) << ' '  // true
        << (pt1 >  pt2) << ' '  // false
        << (pt1 >= pt2) << ' '; // false
		
    fmt::println("The value is: {}", value);
    fmt::println("The sky is blue my friend!");
    return 0;
}