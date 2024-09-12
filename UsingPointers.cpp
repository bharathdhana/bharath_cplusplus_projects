#include <iostream>
using namespace std;

struct Student {
  int Id;
  string stud_name;
  string dept;
  int age;
};

int main() {
  Student student;

  cout << "***Enter Student Details***" << endl;

  cout << "Enter Id: " << endl;
  cin >> student.Id;

  cout << "Enter Name: " << endl;
  cin >> student.stud_name;

  cout << "Enter Department: " << endl;
  cin >> student.dept;

  cout << "Student Age:" << endl;
  cin >> student.age;

  Student *ptr = &student;
  cout << "***Student Details***" << endl;
  cout << "ID:"<<ptr->Id << endl;
  cout << "Name:"<<ptr->stud_name << endl;
  cout << "Dept:"<<ptr->dept << endl;
  cout << "Age:"<<ptr->age << endl;

  return 0;
}