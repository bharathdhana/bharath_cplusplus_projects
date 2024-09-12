#include <iostream>
using namespace std;

int main() {
  int marks;
  cout << "Enter the marks: ";
  cin>>marks;
  if(marks==100)
    cout<<"Grade A";
  else if (marks>=90)
    cout<<"Grade B";
  else if(marks>=80)
    cout<<"Grade C";
  else if(marks>=70)
    cout<<"Grade D";
  else if (marks>=60)
    cout<<"Grade E";
  else if (marks<60)
    cout<<"Fail";
}