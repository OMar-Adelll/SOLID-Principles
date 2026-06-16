#ifndef WALKABLE_HPP
#define WALKABLE_HPP

#include "animal.hpp"

// This class will be the child of origin class
// This class will include all verbs which only walkable animals can do (walk, run)

class Walkable : public Animal
{
public:
    virtual void walk() = 0;
    virtual void run() = 0;
    virtual ~Walkable() {}
};

#endif