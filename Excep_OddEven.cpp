#include <iostream>
#include <stdexcept>
using namespace std;

int main() {

  try {
    int a;
    cout << "Enter the number:";
    cin >> a;
    if (cin.fail()) {
      throw runtime_error("Input is not an integer");
    }
    if (a % 2 == 0) {
      cout << a << " is even number";
    } else {
      cout << a << " is odd number";
    }

  } catch (const exception &e) {
    cout << "Exception occured: " << e.what() << endl;
  }
}