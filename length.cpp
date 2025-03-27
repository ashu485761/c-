#include <iostream>
using namespace std;

int main(){
  float x, m, km;
  cout<<"enter length in cm:\n";
  cin >> x;

  m = x/100;

  km = x/ 100000;

  cout <<"length in meter is:\n" <<m;

  cout <<"\nlength in kilometer is :" <<km;

  return 0;

}