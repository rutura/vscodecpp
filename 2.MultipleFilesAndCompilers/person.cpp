#include <iostream>
#include "person.h"


Person::Person()
{
}

Person::~Person()
{
}

void Person::eat()
{
    std::cout << "I am eating" << std::endl;
}


void Person::sleep()
{
    std::cout << "I am sleeping" << std::endl;
}

void Person::play()
{
    std::cout << "I am playing" << std::endl;
}