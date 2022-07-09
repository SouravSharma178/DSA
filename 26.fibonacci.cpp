// fibonacci series using recursion
#include <iostream>
using namespace std;
int n1 = 0;
int n2 = 1;
int fibonacci(int n){
    static int i = 0;
    i++;
    if(i==1){
        cout<<n1<<",";
        cout<<n2<<",";
    }
    static int temp = 0;
    if(n>0){
        temp = n1;
        n1 = n2;
        n2 = temp+n1;
        cout<<n2<<',';
        fibonacci(n-1);
    }
    return 0;
}
int main()
{
    fibonacci(18);
    return 0;
}
