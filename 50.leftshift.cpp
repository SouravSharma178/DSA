// this is left array shifting
#include <iostream>
using namespace std;
struct arrey{
    int A[6];
    int size;
    int length;
};
void display(struct arrey arr){
    for (int i = 0; i <= arr.length-1;i++) {
        cout<<arr.A[i]<<",";
    }
}
int shift(struct arrey *arr){
    for (int i = 0; i <=arr->length-2; i++) {
         arr->A[i] = arr->A[i+1];
    }
    arr->A[arr->length-1] = 0;
    return -1;
}
int main()
{
    struct arrey arr = {{10,20,30,40,50,60},6,6};
    shift(&arr);
    display(arr);
    return 0;
}
