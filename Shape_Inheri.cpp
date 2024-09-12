#include <iostream>
using namespace std;

class Shape {
protected:
  int width=10;
  int height=55;
  void display() { 
    cout<<"Displaying Shape"<<endl;
    cout << width * height<<endl; }
};
class Circle : public Shape {
public:
  double radius=3.14;
  void display1() {
    display();
    cout<<"Displaying Circle"<<endl;
    cout << radius * width * height;
  }
};
  int main() {
    Circle c;
    c.display1();
    return 0;
  }