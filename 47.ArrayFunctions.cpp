// here we are going to perform various arrey functions such as get,set,max,min and average using arrey
#include <iostream>
using namespace std;
struct arrey{
    int A[10];
    int size;
    int length;
};
void display(struct arrey arr){
    for (int i = 0; i <= arr.length-1; i++) {
        cout<<arr.A[i]<<",";
    }
}
int get(struct arrey arr,int index){
    if(index<=arr.length-1){
        return arr.A[index];
    }
    return -1;
}
int set(struct arrey *arr,int index,int element){
    if(index<=arr->length-1){
        for (int i = arr->length-1; i >=index; i--) {
            arr->A[i+1] = arr->A[i];
        }
        arr->A[index] = element;
        arr->length++;
    }
    return -1;
}
int max(struct arrey arr){
    int max;
    max = arr.A[0];
    for (int i = 0; i <= arr.length-1; i++) {
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }
    return max;
}
int min(struct arrey arr){
   int min;
    min = arr.A[0];
    for (int i = 0; i <= arr.length-1; i++) {
        if(arr.A[i]<min){
            min = arr.A[i];
        }
    }
    return min;
}
float average(struct arrey arr){
   float sum = 0;
   for (int i = 0; i <= arr.length-1; i++) {
        sum += arr.A[i];
    }
    return sum/arr.length;
}
int main()
{
    struct arrey arr = {{10,20,30,40,50},10,5};
    cout<<"choose the operation to perform "<<endl;
    int option;
    cin>>option;
    switch(option){
     case 1:
           int index,value;
           cout<<"Enter the index "<<endl;
           cin>>index;
           value = get(arr,index);
           cout<<"The element is at index "<<value;
           break;
     case 2:
          int index2,element;
          cout<<"Enter the index "<<endl;
          cin>>index2;
          cout<<"Enter the element "<<endl;
          cin>>element;
          set(&arr,index2,element);
          display(arr);
          break;
     case 3:
           cout<<max(arr);
           break;
     case 4:
           cout<<min(arr);
           break;
     case 5:
           cout<<average(arr);
           break;
    }
    return 0;
}
