#include <iostream>
using namespace std;
void fun(int n){
    static int temp = 0;
    // int temp = 0;
    if(n>0){
        cout<<temp<<endl;
        temp++;
        fun(n-1);
    }
}
int main()
{
    fun(3);
    return 0;
}
