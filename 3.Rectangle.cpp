#include<iostream>
using namespace std;
struct rectangle{
   int l;
   int b;
   char c;
/*
1.instead of taking a combined of 9 bytes 4+4+1 = 9 it is taking a combined of 12 bytes
2.Just like a medicine is received in a full single strip which makes it easier for the shopkeeper to manage his inventory in the same manner while allocating 4 bytes to both integers the system allots 4 bytes to the character as well instead of just 1/2 bytes
3.It will still use 1/2 bytes but will allocate a greater size that is 4 bytes*/
};
int main()
{
    struct rectangle r1 = {2,5,7};
    cout<<sizeof(r1);
 return 0;
}