#include <iostream>
using namespace std;
int main() {
  int n = 0;
  for (int i = 1; i <= 20; ++i) {
    if (i % 2 != 0) {
      continue;
    }
    n = n + i;
  }
  cout << "Sum of even numbers from 1 to 20: " << n << endl;
  return 0;
}
