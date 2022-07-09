#include<iostream>
using namespace std;
struct Rectangle{
    int l;
    int b;
};
int main()
{
    struct Rectangle r;
    r.l = 10;
    r.b = 15;
    cout<<"Area of Rectangle is "<<r.l*r.b<<endl;
 return 0;
}