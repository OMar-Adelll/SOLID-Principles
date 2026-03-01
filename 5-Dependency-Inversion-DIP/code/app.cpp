#include <iostream>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define nl '\n'

// Abstraction
class DeliveryService {
public:
  virtual void deliver() = 0;
  virtual ~DeliveryService() {}
};


// Low level modules
class FedEx : public DeliveryService {
public:
  void deliver() override { cout << "Delivering using FedEx" << nl; }
};

class DHL : public DeliveryService {
public:
  void deliver() override { cout << "Delivering using DHL" << nl; }
};

// High level modules
class Company {
private:
  DeliveryService *deliveryService; // Depends on abstraction

public:
  Company(DeliveryService *deliveryService)
      : deliveryService(deliveryService) {}
  void deliver() { deliveryService->deliver(); }
};

int main() {

  FedEx fedEX;
  DHL dhl;

  Company amazon(&fedEX);
  Company noon(&dhl);

  amazon.deliver();
  noon.deliver();

  return 0;
}
