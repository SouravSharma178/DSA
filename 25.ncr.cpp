// combination using recursion
#include <iostream>
using namespace std;
int combination(int n,int r){
    static int temp = 1;
    static int temp1 = 1;
    if(r>0){
        temp *=r;
        temp1 *=n;
        combination(n-1,r-1);
        return temp1/temp;
    }
    return 0;
}
int main()
{
    int value = combination(10,3);
    cout<<value;
    return 0;
}
