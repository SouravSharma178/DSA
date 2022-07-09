// sum of n natural numbers using recursion
#include <iostream>
#include<math.h>
using namespace std;
int fun(int n){
    int temp = 5;
    static int sum = 0;
    if(n>0){
        temp =pow(temp,n);
        sum +=temp;
        fun(n-1);
        return sum;
    }
    return 0;
}
int main()
{
    int value = fun(3);
    cout<<value;
    return 0;
}
