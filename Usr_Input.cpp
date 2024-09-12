#include <iostream>
using namespace std;

void Car() {
  string Name, Model, Number;
  cout << "Enter Car Name: ";
  cin >> Name;
  cout << "Enter Car Model: ";
  cin >> Model;
  cout << "Enter Car Number: ";
  cin >> Number;
  cout<<"Details of CAR !!"<<endl;
  cout << "Car Name: " << Name << endl;
  cout << "Car Model: " << Model << endl;
  cout << "Car Number: " << Number << endl;
}
int main() { Car(); }