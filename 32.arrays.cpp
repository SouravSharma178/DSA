// address of arrays
#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {4,5,6};
    int *ptr = arr;
    for(int i=0;i<3;i++){
       // this is pointer arithmatic 
       cout<<*(arr+i)<<endl;
       cout<<&ptr[i]<<endl;
    }

    return 0;
}
