#include <iostream>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define nl '\n'

/*
    The main idea of this principle is to avoid forcing a class to implement methods it does not need.
*/

class Animal {
public:
  virtual void eat() = 0;
  virtual void drink() = 0;
  virtual ~Animal() {}
};

class walkable {
public:
  virtual void walk() = 0;
  virtual ~walkable() {}
};

class flyable {
public:
  virtual void fly() = 0;
  virtual ~flyable() {}
};

class Dog : public Animal, public walkable {
public:
  void eat() override { cout << "Dog is eating" << nl; }
  void drink() override { cout << "Dog is drinking" << nl; }
  void walk() override { cout << "Dog is walking" << nl; }
};

class Bird : public Animal, public flyable {
public:
  void eat() override { cout << "Bird is eating" << nl; }
  void drink() override { cout << "Bird is drinking" << nl; }
  void fly() override { cout << "Bird is flying" << nl; }
};

int main() {

  Dog dog;
  Bird bird;

  dog.drink();
  dog.eat();
  dog.walk();

  bird.drink();
  bird.eat();
  bird.fly();

  return 0;
}
