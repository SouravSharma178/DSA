// taylor series using recursion
#include <iostream>
#include<math.h>
using namespace std;
int temp;
double fun(int n){
    static int temp = 1;
    if(n>0){
        temp *=n;
        fun(n-1);
        return temp;
    }
    return 0;
}
double taylor(int x,int n){
    static double num = 1;
    static double den = 1;
    static double sum;
     if(n>0){
        num = pow(x,n);
        den = fun(n);
         sum += num/den;
        taylor(x,n-1);
        return sum;
     }
     return 0;
}
int main()
{
    double range = taylor(1,10);   // x and number of terms
    cout<<range;
    return 0;
}
