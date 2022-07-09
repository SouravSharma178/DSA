// insert an element at a given index in an array
#include <iostream>
using namespace std;
int length;
int main()
{
    int n;
    cout<<"Enter the number of elements "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the length of the array "<<endl;
    cin>>length;
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<length;i++){
        if(length<=n){
          cin>>arr[i];
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
    for(int i=length;i>=index;i--){
        if(n==length){
            cout<<"not possible "<<endl;
            break;
        }
        else{
            count++;
            arr[i+1] = arr[i];
        }

    }
    if(count!=0){
    arr[index] = element;
    length++;
    }
    for(int i=0;i<=length-1;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}