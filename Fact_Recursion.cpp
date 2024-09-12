#include <iostream>
using namespace std;
int fact(int n) {
  if (n == 1)
    return 1;
  else 
    return n * fact(n - 1);
  }
  int main() 
  {
    cout<<"Factorial of given number is:"<<fact(8);
    return 0;
  }