// 2-D arrays
#include <iostream>
using namespace std;
// this is the heap and stack array where pointer in stack points to elements in the heap
int main()
{
    // pointer array in stack will point to pointer array in heap
    // this is a pointer array
    int *p[3];
    p[0] = new int[4];
    p[1] = new int[4];
    p[2] = new int[4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
         cout<<"Enter the element "<<i<<j<<endl;
         cin>>p[i][j];
        }
    }
     for(int i=0;i<3;i++){
        cout<<endl;
        for(int j=0;j<4;j++){
         cout<<p[i][j]<<",";
        }
    }

    return 0;
}
