#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main()
{
  struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle));

  // p = new rectangle;

  p ->length = 10;
  p ->breadth = 20;
  cout<<p->length<<endl<<p->breadth<<endl;
  return 0;
}