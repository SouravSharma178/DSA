#include<iostream>
using namespace std;
int main()
{
 int *p;
 // a new keyword is used to allocate memory in heap in c++
 p = new int[5]; // This will create an array inside a heap
 cout<<"Enter the elements of the array"<<endl;
 for(int i=0;i<5;i++){
     cin>>p[i];
 }
 for(int i=0;i<5;i++){
     cout<<p[i]<<endl;;
 }
// whenvever we are dynamically allocating the memory we must also deallocate it.To release it we will use the following syntax

 delete []p;
// for doing the same thing in c we will write free(p);
 return 0;
}