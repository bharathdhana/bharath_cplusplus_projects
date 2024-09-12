#include <iostream>
using namespace std;

class Vehicle {
public:
  virtual void Start() { cout << "Engine started" << endl; }
};
class Car : public Vehicle {
public:
  void Start() { cout << "Car started" << endl; }
};
class Bike : public Vehicle {

public:
  void Start() { cout << "Bike started" << endl; }
};

int main() {
  Vehicle *car = new Car();
  Vehicle *bike = new Bike();
  car->Start();
  bike->Start();
}