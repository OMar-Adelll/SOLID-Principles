#include <iostream>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define nl '\n'

/*
    The main idea of LSP is to make our code extensible but not modifiable.
    We can add new features to our code without modifying the existing code.
    We can achieve this by using abstraction and inheritance.
*/

class Bird {
public:
  virtual void eat() { cout << "I can Eating\n"; }
  virtual ~Bird() {}
};

class FlyableBird : public Bird {
public:
  virtual void fly() = 0;
};

class Sparrow : public FlyableBird {
public:
  void fly() override { cout << "Sparrow is flying!" << endl; }
};

class Penguin : public Bird {
public:
  void swim() { cout << "Penguin is swimming!" << endl; }
};

// objects of child class should be replaceable with objects of parent class
// you send a sparrow to a function thet have a parameters with type of parent
// class and the function will work correctly
void makeFly(FlyableBird *bird) { bird->fly(); }
void makeSwim(Penguin *bird) { bird->swim(); }

int main() {

  Sparrow *sparrow = new Sparrow();
  Penguin *penguin = new Penguin();

  sparrow->eat();
  makeFly(sparrow); 

  penguin->eat();
  penguin->swim();

  delete sparrow;
  delete penguin;

  return 0;
}