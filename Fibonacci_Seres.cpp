#include <iostream>
using namespace std;

int main() {
  int a = 0, b = 1, c, len;
  cout << "Enter the number:";
  
  cin >> len;
  cout<<a<<endl;
  cout<<b<<endl;
  for (int i = 2;i < len;i++) {
    c = a + b;
    cout << c << "" << endl;
    a = b;
    b = c;
    
  }
}