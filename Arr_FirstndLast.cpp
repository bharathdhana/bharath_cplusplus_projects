#include <iostream>
using namespace std;

int main() {
    int n,arr[5]={};
    cout<<"Enter the element to be stored\t";
    cin>>n;

    for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
   
        cout<<"First element:"<<arr[0]<<endl;
        cout<<"Last element:"<<arr[n-1];
      
  return 0;
}
