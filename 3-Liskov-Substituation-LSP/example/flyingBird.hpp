#ifndef FLYINGBIRD_HPP
#define FLYINGBIRD_HPP

#include <iostream>
#include "bird.hpp"

// FlyableBird is only for birds that can really fly.
// It adds fly() on top of the normal Bird behavior.
//
// LSP idea:
// A FlyableBird must always be safe to use where flying is expected.
// Birds that cannot fly, like Penguin or Cassowary, should not inherit this class.

class FlyableBird : public Bird
{
public:
    virtual void fly() = 0;

    virtual ~FlyableBird() {}
};

#endif
