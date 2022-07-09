// this is binary search algorithm using recursion
#include <iostream>
#include <math.h>
using namespace std;
struct arrey{
    int A[10];
    int size;
    int length;
};
int RBinarySearch(struct arrey arr,int low,int high,int key){
    int mid;
    if(low<=high){
        mid = floor((low+high)/2);
        if(key==arr.A[mid]){
            return mid;
        }
        else if(key<arr.A[mid]){
           return RBinarySearch(arr,low,mid-1,key);
        }
        else if(key>arr.A[mid]){
          return RBinarySearch(arr,mid+1,high,key);
        }
    }
    return -1;
}
int main()
{
    struct arrey arr={{2,3,4,5,6},10,5};
    int key;
    cout<<"Enter the key to search "<<endl;
    cin>>key;
    cout<<"The element is found at index "<<RBinarySearch(arr,0,5,key)<<endl;

    return 0;
}

