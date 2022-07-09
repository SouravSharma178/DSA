// this is binary search algorithm using loop
#include <iostream>
#include <math.h>
using namespace std;
struct arrey{
    int A[10];
    int size;
    int length;
};
int BinarySearch(struct arrey arr,int key){
    int low = 0;
    int high = arr.length -1;
    int mid;
    while(low<=high){
        mid = floor((low+high)/2);
        if(key==arr.A[mid]){
            return mid;
        }
        else if(key<arr.A[mid]){
            high = mid -1;
        }
        else{
            low = mid+1;
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
    cout<<"The element is found at index "<<BinarySearch(arr,key)<<endl;

    return 0;
}

