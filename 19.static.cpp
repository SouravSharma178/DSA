// this a very important concept
#include<iostream>
using namespace std;
int fun(int n){
    int x = 0;
if(n>0){
    x++;
//  when a function returns something anything attached to it will also get change its value
    return fun(n-1) + x;
}
return 0;
}
int main()
{
    int value = fun(5);
    cout<<value<<endl;
 return 0;
}