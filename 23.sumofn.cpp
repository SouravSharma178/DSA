#include <iostream>
using namespace std;
int fun(int n){
    static int temp = 0;
    if(n>0){
        temp +=n;
        fun(n-1);
        return temp;
    }
    return 0;
}
int main()
{
    int value = fun(5);
    cout<<value<<endl;
    return 0;
}