/*
	. Compiling, running and debugging C++ source files in VS Code.
	. All is done in a single file
	. Shows how to use tasks.json files and launch.json files.
	. Reference: https://code.visualstudio.com/docs/cpp/config-msvc
*/

#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::vector<std::string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const std::string& word : msg)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}