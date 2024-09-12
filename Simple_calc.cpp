#include <iostream>
using namespace std;

int main() {
  int a, b;
  char op;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "Enter the operator: ";
  cin >> op;
  switch (op) {
  case '+':
    cout << "Addition a and b is: " << a + b << endl;
    break;
  case '-':
    cout << "Subtraction a and b is: " << a - b << endl;
    break;
  case '*':
    cout << "Multiplication a and b is: " << a * b << endl;
    break;
  case '/':
    cout << "Division a and b is: " << a / b << endl;
    break;
  case '%':
    cout << "Modulus a and b is: " << a % b << endl;
    break;
  default:
    cout << "Invalid operation" << endl;
  }
}