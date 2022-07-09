#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int &r = a;
    // references is just another name for the variable

    cout<<"Value changed "<<endl;

    // value of r has been changed so the value of a also got updated
    int b= 20;
    r = b;
    cout<<a<<endl<<r;
    return 0;
}