/*
    . The tasks.json file calls the compiler for you
    . Pros: 
        . This is simple
        . You just install the compiler and the C++ extension and you are ready to go.

    . Cons:
        . When the project grows, managing multiple files becomes a pain
        . Hard to bring in third party dependencies
        . Hard to incorporate C++ 20 modules into your project.
		. Relatively harder to set up a debugger.
*/
#include <iostream>

int main()
{
    std::cout << "The sky is blue my friend!" << std::endl;
    return 0;
}