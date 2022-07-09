// nested recursion
#include <iostream>
using namespace std;
int fun(int n){
    if(n>100){
        return n - 10;
    }
    else{
        return fun(fun(n+11));
    }
    return 0;
}
int main()
{
    int value = fun(95);
    cout<<value;
    return 0;
}
