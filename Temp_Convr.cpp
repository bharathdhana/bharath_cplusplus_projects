#include <iostream>
using namespace std;

int Conve(int n) {
  int b = 0;
  cout << n * 9/5 + 32;
  return b;
}
int main() {
  int n;
  cout << "Enter the value to convert: ";
  cin >> n;
  cout<<"The value in Fahrenheit is: ";
  Conve(n);
}