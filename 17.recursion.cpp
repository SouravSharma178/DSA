// recursion
#include<iostream>
using namespace std;
void fun(int n){
if(n>0){
    cout<<n<<" ";
    fun(n-1);
    // in this program the values first get printed then the activation record is created
}
}
int main()
{
    int x = 3;
    fun(x);

 return 0;
}