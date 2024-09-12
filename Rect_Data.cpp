#include <iostream>
using namespace std;

class Rectangle {
public:
  int breadth;
  int width;
  Rectangle(int b, int w) {
    breadth = b;
    width = w;
  }
  void area() {
    cout << "Area of Rectangle:"<<endl;
    cout << breadth * width<<endl;
  }
  void Perimeter() {
    cout << "Perimeter of Rectangle:"<<endl;
    cout << 2 * (breadth + width);
  }
};
int main() {
  cout<<"Printing the Datas of Rectangle:"<<endl;
  Rectangle r(4, 5);
  r.area();
  r.Perimeter();
  return 0;
}