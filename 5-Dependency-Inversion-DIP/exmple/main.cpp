#include <iostream>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define nl '\n'

/*
    The main idea of this principle is to invert the dependency.
    Instead of high-level modules depending on low-level modules,
    both should depend on abstractions.

    this means that :
    company shouldn't depends on delivery service (one service) but both should
    depends on abstruction (have a multiple ways to deliver your goods) using abstruction
    to handel low-level operations
*/

#include "delivery.hpp"
#include "fedex.hpp"
#include "dhl.hpp"
#include "company.hpp"

int main()
{

  FedEx fedEX;
  DHL dhl;

  Company amazon(&fedEX);
  Company noon(&dhl);

  amazon.deliver();
  noon.deliver();

  return 0;
}
