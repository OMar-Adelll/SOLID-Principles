#include <iostream>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define nl '\n'

/*
    Liskov Substitution Principle (LSP)

    A child class should be usable anywhere its parent class is expected.

    In this example:
    - Any Bird can eat.
    - Only FlyableBird objects can fly.
    - Only SwimmableBird objects can swim.

    This keeps the design honest. A Penguin is a Bird, but it is not a
    FlyableBird, so the code never asks a Penguin to fly.
*/

// bird and birds category
#include "bird.hpp"
#include "flyingBird.hpp"
#include "swimmingBird.hpp"

// birds
#include "birds/Cassowary.hpp"
#include "birds/Duck.hpp"
#include "birds/Eagle.hpp"
#include "birds/Penguin.hpp"
#include "birds/Sparrow.hpp"

// These functions depend on the correct parent type.
// Any child of that parent can be passed safely. (this is the main idea)

void MakeFly(FlyableBird *bird)
{
  bird->fly();
}

void MakeSwim(SwimmableBird *bird)
{
  bird->swim();
}

void MakeEat(Bird *bird)
{
  bird->eat();
}

int main()
{

  Sparrow *sparrow = new Sparrow();

  // Sparrow can replace Bird because it can eat.
  MakeEat(sparrow);

  // Sparrow can also replace FlyableBird because it can fly.
  MakeFly(sparrow);

  // MakeSwim(sparrow); will gives you error cuz the soparrow's parent is FlyableBird don't have swimming verb

  delete sparrow;

  return 0;
}
