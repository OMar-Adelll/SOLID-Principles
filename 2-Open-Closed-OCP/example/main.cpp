#include <iostream>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define nl '\n'

/*
    Open/Closed Principle (OCP):
    Software entities should be open for extension and closed for modification.

    In this example, each payment method implements the same Payment interface.
    New payment methods can be added by creating new classes, without changing
    the code that uses the Payment abstraction.
*/

#include "payment.hpp"
#include "cash.hpp"
#include "credit.hpp"
#include "paypal.hpp"
#include "crypto.hpp"

int main()
{
  // Each concrete payment method is used through the Payment abstraction.
  Payment *paymentMethod = new Cash();
  paymentMethod->pay(100);
  delete paymentMethod;

  paymentMethod = new Credit();
  paymentMethod->pay(200);
  delete paymentMethod;

  paymentMethod = new Paypal();
  paymentMethod->pay(300);
  delete paymentMethod;

  paymentMethod = new Crypto();
  paymentMethod->pay(400);
  delete paymentMethod;

  return 0;
}
