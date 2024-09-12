#include <iostream>
using namespace std;

int add(int x, int y) { return x + y; }
int sub(double a, double b) { return a - b; }
int mul(int x, int y) { return x * y; }
int divi(int x, int y) { return x / y; }
int main() {

  double a1 = 2.5, b1 = 3.5;
  int x = 10, y = 30;
  cout << "The Results are:";
  cout << "Addition:";
  cout << add(x, y) << endl;
  cout << "Subtraction:";
  cout << sub(a1, b1) << endl;
  cout << "Multiplication:";
  cout << mul(x, y) << endl;
  cout << "Division:";
  cout << divi(x, y);
}