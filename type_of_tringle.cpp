#include <iostream>
using namespace std;

int main(){
  float x, y, z, sum;
  cout<<"enter the three angles:";
  cin>> x>> y>> z;

  sum = x + y + z;
  
  if(sum==180){
   if(x==y && x==z){
    cout<<"tringle is equilateral\n";
   }else{
    cout<<"tringle is not equilateral\n";
   }
   if(x==y || x==z || y==z){
    cout<<"tringle is isosceles\n";
   }else{
    cout<<"tringle is not isosceles\n";
   }
   if(x!=y && x!=z && y!=z){
    cout<<"tringle is scalene\n";
   }else{
    cout<<"tringle is not scalene\n";
   }
  }else{
    cout<<"invalid\n";
  }
return 0;
}