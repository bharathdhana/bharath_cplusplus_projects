#include "iostream"
using namespace std;
int main() {
  char ch = 'E';
  switch (ch) {
  case 'a':
    cout << "lowercase alphabet a";
    break;
  case 'A':
    cout << "uppercase alphabet A";
    break;
  case 'e':
    cout << "lowercase alphabet e";
    break;
  case 'E':
    cout << "uppercase alphabet E";
    break;
  default:
    cout << "invalid";
  }
  return 0;
}