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
#include "person.h"


int main()
{
    std::vector<std::string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const std::string& word : msg)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;
    Person p;
    p.eat();
    auto result = (10 <=>20);
}