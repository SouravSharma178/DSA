// towers of hanoi problem
#include <iostream>
using namespace std;
void toh(int n,int start,int end){
    int middle;
    if(n==1){
        cout<<"1->3"<<endl;
    }
    else{
        middle = 6-(start+end);
        toh(n-1,start,middle);
        cout<<start<<"->"<<end<<endl;
        toh(n-1,middle,end);
    }
}
int main()
{

    toh(3,1,3);

    return 0;
}

