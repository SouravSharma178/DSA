#include<iostream>
using namespace std;
int main()
{  // This array is created inside a stack
   int A[5] = {2,4,6,8,10};
   int *p;
   p = &A[0];
   // p = A; this can also be written like this
   for(int i=0;i<5;i++){
    /* pointer to an array will directly print the array values
    without needing a star*/
       cout<<p[i]<<endl;;
   }
 return 0;
}