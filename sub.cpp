#include <iostream>
using namespace std;

int main(){
  float x1, x2, x3, x4, x5, to, avg, per;
  cout<<"enter 5 sub marks:";
  cin>> x1>> x2>> x3>> x4>> x5;

  to = x1 + x2 + x3 + x4 + x5;

  avg = to/5;
  
  per = (to/500) * 100;

  cout<<"\ntotal mark is:to\n" << to;
  cout<<"\naverage mark is:avg\n" <<avg;
  cout<<"\npercentage of the mark is:per\n" <<per;

  return 0;
}