// stack implementation using arrays
// push,pop,isFull,isEmpty,display
#include <iostream>
using namespace std;
int emptyslot = 0;
int arr[] = {};
void push(int size){
    if(emptyslot<=size-1){
        int value;
        cout<<"Enter the value to push into the stack"<<endl;
        cin>>value;
        arr[emptyslot] = value;
        emptyslot++;

    }
    else{
        cout<<"Stack overflow"<<endl;
    }
}
void pop(int size){
      if(emptyslot!=-1){
        arr[emptyslot] = NULL;
        emptyslot--;
    }
    else if(emptyslot==-1){
        cout<<"Stack underflow"<<endl;
    }
}
void isFull(int size){
    if(emptyslot==size){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
void isEmpty(){
    if(emptyslot==0){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
void display(){
    if(emptyslot!=0){
        cout<<"The stack is"<<endl;
        for(int i=emptyslot-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
    }
    else{
        cout<<"Nothing to display - Null"<<endl;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of stack"<<endl;
    cin>>size;
    cout<<"Select the operations u want to perform"<<endl;
    for(int i=0;;i++){
        int value;
        cout<<"Enter the value"<<endl;
        cout<<"1.push 2.pop 3.isFull 4.isEmpty 5.display "<<endl;
        cin>>value;
        if(value==1){
            push(size);
        }
        else if(value==2){
            pop(size);
        }
         else if(value==3){
            isFull(size);
        }
         else if(value==4){
            isEmpty();
        }
        else if(value==5){
            display();
        }
        else{
            break;
        }
    }
    return 0;
}
