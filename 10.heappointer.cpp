#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main()
{
  struct rectangle r = {10,5};

 // for normal variables we use a dot operator
 
  cout<<r.length<<endl<<r.breadth<<endl;

// but for pointer variables we will use a arrow operator

  struct rectangle *p = &r;

cout<<p->length<<endl<<p->breadth<<endl;
  return 0;
}