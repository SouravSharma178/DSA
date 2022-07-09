#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
// this is purely heap array
// so this array will have a double pointer in stack and a pointer array in heap
{
    int **ptr;
    ptr = new int*[2];
// once the pointer holds the array address then their is no difference between the pointer and the variable
    ptr[0] = new int[3];
    ptr[1] = new int[3];
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
         cin>>ptr[i][j];
    }
    }
     for(int i=0;i<2;i++){
        cout<<endl;
        for(int j=0;j<3;j++){
          cout<<ptr[i][j]<<",";
    }
    }
    return 0;
}
