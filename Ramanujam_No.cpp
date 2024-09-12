#include <iostream>
using namespace std;
// Doesnt Work Properly
int main() {
  int a, b, c, i, sum = 0;
  for (i = 1000; i <= 9999; i++)
    a = i;

  while (a > 0) {
    b = a % 10;
    c = b * b;
    sum = sum + c;
    a = a / 100;
  }
  if (sum == i) {
    cout << "Ramanujam No:" << i;
  }
}