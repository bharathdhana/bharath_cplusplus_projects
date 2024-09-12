#include <iostream>
using namespace std;

class Student {
public:
  int rollno;
  string name;
  int marks;

  Student(int r, string n, int m) {
    rollno = r;
    name = n;
    marks = m;
  }
  void display() {
    cout << "Student Details !"<<endl;
    cout << "Roll no: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
  }
};
int main() {
  Student s(1234, "Ram", 90);
  s.display();
  return 0;
}