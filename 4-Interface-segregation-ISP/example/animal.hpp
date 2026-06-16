#ifndef ANIMAL_HPP
#define ANIMAL_HPP

// This is origin Animal class
// This class will include all intersected verbs such as (eat, drink)

class Animal
{
public:
    virtual void eat() = 0;
    virtual void drink() = 0;
    virtual ~Animal() {}
};

#endif