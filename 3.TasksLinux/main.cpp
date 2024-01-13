/*
    . Reference: https://code.visualstudio.com/docs/cpp/config-linux
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
    auto result = (10 <=> 20);
    return 0;
}