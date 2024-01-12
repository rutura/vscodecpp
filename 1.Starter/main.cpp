/*
    . Setting up a C++ project and compiling through task.json.
        . You set up a task.json file that tells VS Code how to compile your code.
        . Debugging: 
            . Select the main file,  select the triangle button in the top right corner
                and select debug C/C++ file.
            . Going through a launch.json file.
    . Pros: 
        . This is simple
        . You just install the compiler and the C++ extension and you are ready to go.

    . Cons:
        . This works for toy/small projects. When the project grows, managing multiple files becomes a pain.
        . Hard to bring in third party dependencies
        . Hard to incorporate C++ 20 modules into your project.
		. Relatively harder/cumbersome to set up a debugger.
*/
#include <iostream>

int main()
{
    int value { 5 };
    std::cout << "Value: " << value << "\n";
    return 0;
}