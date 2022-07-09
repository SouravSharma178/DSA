// call by address
#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout<<"Value of x "<<*x<<endl;
    cout<<"Value of y "<<*y<<endl;
}
int main()
{
  int a,b;
  a = 10;
  b = 20;
  swap(&a,&b);
  // as pointers are used the values of a and b will also get updated
  cout<<a<<endl<<b<<endl;
 return 0;
}