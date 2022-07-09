#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int &r = a;
    // references is just another name for the variable
    cout<<a<<endl<<&a<<endl<<&r<<endl<<r<<endl;
    cout<<"Value changed "<<endl;
    r = 30;
    cout<<a<<endl<<r<<endl;
 return 0;
}