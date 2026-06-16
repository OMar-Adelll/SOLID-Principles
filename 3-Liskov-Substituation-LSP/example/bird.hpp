#ifndef BIRD_HPP
#define BIRD_HPP

#include <iostream>

// Bird is the base class for all birds in this example.
// Every real bird can eat, so eat() belongs here.
//
// LSP idea:
// Any class that inherits from Bird must be able to behave like a Bird.
// That means every child class must provide a real eat() behavior.

class Bird
{
public:
    virtual void eat() = 0;

    virtual ~Bird() {}
};

#endif
