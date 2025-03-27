#include <iostream>
using namespace std;

int main(){
  float x, y, z, sum;
  cout<<"enter the three angles:";
  cin>> x>> y>> z;

  sum = x + y + z;
  
  if(sum==180){
    cout<<"tringle is valid";
  }else{
    cout<<"tringle is not valid";
  }
return 0;
}