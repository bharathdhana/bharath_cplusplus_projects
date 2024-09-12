#include "math.h"
#include <iostream>
using namespace std;

int power(int x, int y) // x is base and y is power
{
  if (y == 0) {
    return 1;

  } else {
    return x * power(x, y - 1);
  }
}

int main() {
  int x, y;
  cout << "Enter the base: ";
  cin >> x;
  cout << "Enter the power: ";
  cin >> y;
  cout << "Result:"<<power(x, y);
  return 0;
}