// linear search by move to front/head
#include <iostream>
using namespace std;
struct arrey{
    int A[10];
    int size;
    int length;
};
void display(struct arrey *arr){
    for (int i = 0; i < arr->length; i++) {
        cout<<arr->A[i]<<",";
    }
}
void insert(struct arrey *arr,int index,int x){
    if(arr->length<=arr->size){
    for (int i = arr->length-1; i>=index; i--) {
        arr->A[i+1] = arr->A[i];
    }
    }
    else{
        cout<<"Invalid operation "<<endl;
    }
    arr->A[index] = x;
    arr->length++;
}
void del(struct arrey *arr,int index){
     for (int i = index; i<=arr->length-1; i++) {
        if(index<arr->length){
         arr->A[i] = arr->A[i+1];
        }
        else{
            break;
        }
    }
    arr->length--;
}
void swap(int *x,int *y){
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
}
int linearsearch(struct arrey *arr,int key){
    for (int i = 0; i < arr->length; i++) {
        if(arr->A[i]==key){
        {    swap(&arr->A[i],&arr->A[0]);
             return i;
            }
        }
    }
    return -1;
}
int main()
{
    struct arrey arr={{2,3,4,5,6},10,5};
    int result = linearsearch(&arr,6);
    cout<<"Key is found at index "<<result<<endl;
    display(&arr);
    return 0;
}
