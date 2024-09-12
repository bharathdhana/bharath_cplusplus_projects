#include <iostream>
using namespace std;

// int Prime(int n) {};

int main() {
  int n;
  int i, j;
  int flag = 1;
  cout << "Enter the number:";
  cin >> n;

  j = n / 2;
  for (i = 2; i <= j; i++) {
    if (n % i == 0) {
      flag = 0;
      break;
    }
  }
  if (flag == 1) {
    cout << "Prime number";
  } else {
    cout << "Not a prime number";
  }

  // cout << Prime(n);
  return 0;
}