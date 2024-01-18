/*
	. Compiling, running and debugging C++ source files in VS Code.
	. Shows how to use tasks.json files and launch.json files.
	. Now we extend the project: 
		. To use several .cpp and .h files if necessary
		. To seemlesly switch between cl.exe and g++.exe
	. Reference: https://code.visualstudio.com/docs/cpp/config-msvc
*/

#include <iostream>
#include <vector>
#include <string>
#include <compare>
#include <set>
#include "person.h"

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
    Person p;
    p.eat();

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

}