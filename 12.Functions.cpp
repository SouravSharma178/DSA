// Paramater passing
// call by value
#include<iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"Value of x "<<x<<endl;
    cout<<"Value of y "<<y<<endl;
}
int main()
{
    int a,b;
    a = 10;
    b = 20;
    swap(a,b);
 return 0;
}