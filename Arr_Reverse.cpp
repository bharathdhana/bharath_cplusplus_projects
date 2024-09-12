#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int arr[4]={1,4,3,2};
   int len=sizeof(arr[0]);
  cout<<"Printing the array"<<endl;
   for(int i=0;i<len;i++)
   {
       cout<<arr[i]<<"\t";
   }
  cout<<"Printing the array in reverse order"<<endl;
   for(int i=len-1;i>=0;i--)
   {
       cout<<arr[i]<<"\t";
   }
    return 0;
}