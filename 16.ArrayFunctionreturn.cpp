// Function that returns an array
#include<iostream>
using namespace std;
int * fun(int size){
    int *p;
    p  = new int[size];
    cout<<"Enter the array values "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>p[i];
    }
    return p;
}
int main()
{
    int *ptr,sz = 5;
    ptr = fun(sz);
    for (int i = 0; i < sz; i++)
    {
        cout<<ptr[i]<<" ";
    }
  return 0;
}