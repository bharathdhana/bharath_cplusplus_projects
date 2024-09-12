#include <iostream>
using namespace std;

int main() {
  int r, c, a[50][50], b[50][50], s[50][50];
  cout << "Enter the number of rows: ";
  cin >> r;
  cout << "Enter the number of columns: ";
  cin >> c;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Enter the element matrix1: ";
      cin >> a[i][j] ;
    }
  }
    
  

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Enter the element matrix2: ";
      cin >> b[i][j];
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      s[i][j] = a[i][j] + b[i][j];
      cout<<s[i][j];
    }
  }
}