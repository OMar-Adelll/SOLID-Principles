#ifndef FLYAPLE_HPP
#define FLYAPLE_HPP

#include "animal.hpp"

// This class will be the child of origin class
// This class will include all verbs which only flyable animals can do (fly)

class Flyable : public Animal
{
public:
    virtual void fly() = 0;
    virtual ~Flyable() {}
};

#endif