// insert an element at a given index in an array
#include <iostream>
using namespace std;
struct arrey{
  int *A;
  int size;
  int length;
};

int main()
{
    struct arrey arr;
    cout<<"Enter the number of elements "<<endl;
    cin>>arr.size;
    cout<<"Enter the length of the array "<<endl;
    cin>>arr.length;
    arr.A = new int[arr.size];
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<arr.length;i++){
        if(arr.length<=arr.size){
          cin>>arr.A[i];
        }
        else{
            cout<<"array length cannot be greater than its size "<<endl;
            return 0;
        }
    }
    int element;
    int index;
    cout<<"Enter the element to insert and its index "<<endl;
    cin>>element;
    cin>>index;
    int count = 0;
    for(int i=arr.length;i>=index;i--){
        if(arr.size==arr.length){
            cout<<"not possible "<<endl;
            break;
        }
        else{
            count++;
            arr.A[i+1] = arr.A[i];
        }

    }
    if(count!=0){
    arr.A[index] = element;
    arr.length++;
    }
    for(int i=0;i<=arr.length-1;i++){
        cout<<arr.A[i]<<",";
    }
    return 0;
}
