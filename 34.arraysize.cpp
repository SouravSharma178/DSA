#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p = new int[5];
    cout<<"array size is "<<sizeof(p)<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the element"<<"["<<i<<"]"<<endl;
        cin>>p[i];
    }
    int *q = new int[10];
    for (int i = 0; i < 10; i++)
    {
        q[i] = p[i];
    }
    cout<<"array size is "<<sizeof(q)<<endl;
    // we will free the array memory held by p as we will assign it a value of q
    delete []p;
    // address of q will be assigned to p
    p = q;
    q = NULL;
    for (int i = 0; i < 10; i++)
    {
        cout<<p[i]<<endl;
    }
 return 0;
}