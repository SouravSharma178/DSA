#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *ptr;
    ptr = (int*) malloc(5*sizeof(int));
    cout<<"This is the base address held by the pointers which points to the array in the heap "<<endl<<ptr<<endl;
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;
    for (int i = 0; i < 5; i++)
    {
        cout<<ptr[i]<<endl;
    }

   return 0;
}