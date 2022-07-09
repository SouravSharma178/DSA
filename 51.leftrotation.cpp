// this is array left rotation
#include <iostream>
using namespace std;
char store;
struct arrey{
    char A[8];
    int size;
    int length;
};
void display(struct arrey arr){
    for (int i = 0; i <= arr.length-1;i++) {
        cout<<arr.A[i]<<",";
    }
    cout<<endl;
}
void ledboard(struct arrey *arr){
    for (int i = 0; i <= arr->length-2; i++) {
        if(i == 0){
            store = arr->A[0];
        }
        arr->A[i] = arr->A[i+1];
        if(i == arr->length-2){
            arr->A[arr->length-1] = store;
        }
    }
}
int main()
{
    struct arrey arr = {{'W','E','L','C','O','M','E'},8,7};
    display(arr);
    for (int i = 0; i < 7; i++) {
        ledboard(&arr);
        display(arr);
    }
    return 0;
}

