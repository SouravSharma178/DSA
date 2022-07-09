// in this program length refers to the number of spaces filled in the arrey
#include <iostream>
using namespace std;
struct arrey{
  int *A;
  int size;
  int length;
};
void display(struct arrey arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<",";
    }
}
int main()
{
    struct arrey arr;
    cout<<"Enter the size of the arrey "<<endl;
    cin>>arr.size;
    cout<<"Enter the number of elements "<<endl;
    cin>>arr.length;
    arr.A = new int [arr.size];
    cout<<"Enter the arrey elements"<<endl;
    for(int i=0;i<arr.length;i++){
        cin>>arr.A[i];
    }
    cout<<"The arrey size is "<<endl;
    cout<<arr.length<<endl;
    display(arr);
    return 0;
}
