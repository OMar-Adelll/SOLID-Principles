#ifndef SWIMMINGBIRD_HPP
#define SWIMMINGBIRD_HPP

#include <iostream>
#include "bird.hpp"

// SwimmableBird is only for birds that can really swim.
// It adds swim() on top of the normal Bird behavior.
//
// LSP idea:
// A SwimmableBird must always be safe to use where swimming is expected.
// Birds that cannot swim should not inherit this class.

class SwimmableBird : public Bird
{
public:
    virtual void swim() = 0;

    virtual ~SwimmableBird() {}
};

#endif
