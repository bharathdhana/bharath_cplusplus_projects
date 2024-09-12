#include <iostream>
using namespace std;

int main() {
  int sum = 0, count = 0, avg;
  for (int i = 100; i < 120; ++i) {
    if (i % 2 == 0) {
      sum = sum + i;
      count++;
    }
  }

  if (count != 0) {
    avg = sum / count;
    cout << "Average of 10 numbers from 100 to 120 is " << avg << endl;
  }
}