#include <iostream>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define nl '\n'

/*
    The main idea of OCP is to make our code extensible but not modifiable.
    We can add new features to our code without modifying the existing code.
    We can achieve this by using abstraction and inheritance.
*/

class PaymentMethod {
public:
  virtual void pay(double amount) = 0;
  virtual ~PaymentMethod() {}
};

class CashPayment : public PaymentMethod {
public:
  void pay(double amount) override {
    cout << "Paid " << amount << " using Cash" << nl;
  }
};

class CreditCardPayment : public PaymentMethod {
public:
  void pay(double amount) override {
    cout << "Paid " << amount << " using Credit Card" << nl;
  }
};

class PayPalPayment : public PaymentMethod {
public:
  void pay(double amount) override {
    cout << "Paid " << amount << " using PayPal" << nl;
  }
};

class CryptoPayment : public PaymentMethod {
public:
  void pay(double amount) override {
    cout << "Paid " << amount << " using Crypto" << nl;
  }
};

int main() {
  PaymentMethod *paymentMethod = new CashPayment();
  paymentMethod->pay(100);
  delete paymentMethod;

  paymentMethod = new CreditCardPayment();
  paymentMethod->pay(200);
  delete paymentMethod;

  paymentMethod = new PayPalPayment();
  paymentMethod->pay(300);
  delete paymentMethod;

  paymentMethod = new CryptoPayment();
  paymentMethod->pay(400);
  delete paymentMethod;

  return 0;
}