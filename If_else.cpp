#include "iostream"
using namespace std;
int main() {
  int a, b, c;
  cout << "Enter the first number: ";
  cin >> a;
  cout << "Enter the second number: ";
  cin >> b;
  cout << "Enter the third number: ";
  cin >> c;
  if (a < b) {
    if (a < c) {
      cout << "The smallest number is: " << a << endl;
    }
  } else {
    if (b < c) {
      cout << "The smallest number is: " << b << endl;
    } else {
      cout << "The smallest number is: " << c << endl;
    }
  }
  return 0;
}
