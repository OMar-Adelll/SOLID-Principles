#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "walkable.hpp"

// this class will include all attribute of walkable animals only without flyable animals attributes

class Dog : public Walkable
{
public:
    // eat and drink from origin animal class
    virtual void eat() override
    {
        std::cout << "Dog is eating\n";
    }

    virtual void drink() override
    {
        std::cout << "Dog is drinking\n";
    }

    // walk and run from walkable animal class
    virtual void walk() override
    {
        std::cout << "Dog is walking\n";
    }

    virtual void run() override
    {
        std::cout << "Dog is running\n";
    }
};

#endif