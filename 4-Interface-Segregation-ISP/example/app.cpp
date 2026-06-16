#include <iostream>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define nl '\n'

/*
    The main idea is each interface should have it's own methods only
    example :
    if you have dog interface it should includes his own methods only like (run, walk)
    without including flyable animals' methods like (fly), but there are some attributes
    is common between them should be into the parent class like (eat, drink)
*/

#include "animal.hpp"
#include "walkable.hpp"
#include "flyable.hpp"
#include "bird.hpp"
#include "dog.hpp"

int main()
{

  // each type of animals has it's own methods only without including the other type methods
  Dog dog;

  dog.drink();
  dog.eat();
  dog.walk();
  dog.run();

  Bird bird;

  bird.drink();
  bird.eat();
  bird.fly();

  return 0;
}
