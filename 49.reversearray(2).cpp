// reverse an array by using interchanging elements of the same array
#include <iostream>
using namespace std;
struct arrey{
    int A[5];
    int size;
    int length;
};
void display(struct arrey arr){
    for (int i = 0; i <= arr.length-1;i++) {
        cout<<arr.A[i]<<",";
    }
}
void reverse(struct arrey *arr){
    int temp = 0;
    int i,j;
    for (j=0,i = arr->length-1;i>=0,j<=arr->length-1;i--,j++) {
        if(i==j){
            break;
        }
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}
int main()
{
    struct arrey arr = {{45,60,80,74,10},5,5};
    reverse(&arr);
    display(arr);
    return 0;
}
