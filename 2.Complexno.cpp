#include<iostream>
using namespace std;
struct complex{
    int real;
    int imaginary;
complex(){
    cout<<"Enter the real part"<<endl;
    cin>>real;
    cout<<"Enter the imaginary part"<<endl;
    cin>>imaginary;
}
};
int main()
{
    struct complex type1;
    struct complex type2;
    int temp = type1.real + type2.real;
    int temp2 = type1.imaginary + type2.imaginary;
    cout<<"The sum of two complex numbers is "<<temp<<"+"<<temp2<<"i"<<endl;

 return 0;
}
