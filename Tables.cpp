#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number to print the table: ";
  cin >> n;
  for (int i = 1; i <= 10; ++i) {
    // for(int j=0;j<=10;++j)

    cout << n << "*" << i << "=" << (i * n) << endl;
  }
  return 0;
}