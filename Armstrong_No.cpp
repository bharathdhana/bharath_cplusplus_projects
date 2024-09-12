#include <iostream>
using namespace std;

int main() {
  int n, m, sum = 0, temp;
  cout << "Enter the Number: ";
  cin >> n;
  temp = n;
  while (n > 0) {
    m = n % 10;
    sum = sum + (m * m * m);
    n = n / 10;
  }
  if (temp == sum) {
    cout << "Armstrong Number";

  } else {
    cout << "Not Armstrong Number";
  }
  return 0;
}