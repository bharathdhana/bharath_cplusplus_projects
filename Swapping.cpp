#include "iostream"
using namespace std;
int swapx(int x, int y);
int main()
{
  int a=10,b=20;
swapx(a,b);
  cout<<"the caler";
  cout<<"a="<<a<<"b"<<b;
  return 0;
}
int swapx(int x,int y)
{
  int t;
  t=x;
  x=y;
  y=t;
  cout<<"in fuction";
  cout<<"x="<<x<<"y"<<y;
}