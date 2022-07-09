// both arrays in heap
#include <iostream>
using namespace std;
// first we are going to create both arrays in heap
int main()
{
    int **ptr;
    ptr = new int* [2];
    ptr[0] = new int[2];
    ptr[1] = new int[2];
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
         cin>>ptr[i][j];
    }
    }
    for(int i=0;i<2;i++){
        cout<<endl;
        for(int j=0;j<2;j++){
         cout<<ptr[i][j]<<",";
    }
    }
    return 0;
}
