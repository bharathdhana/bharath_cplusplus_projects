#include <iostream>
#include <string.h>
using namespace std;

int main() {

  string food = "Delicious";  
  string *ptr = &food;
  cout << *ptr;
}