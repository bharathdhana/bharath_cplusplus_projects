#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
  try {
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0) {
      throw runtime_error("Divisible by zero");
    }
    c = a / b;
    cout << c;
  } catch (const exception &e) {
    cout << e.what();
  }
}