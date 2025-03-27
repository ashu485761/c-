#include<iostream>
using namespace std;

int main(){
  int x;
  cout <<"enter the year:\n"<<endl;
  cin >>x;

  if(x%400==0 || x%4==0 && x%100!=0)
  {
    cout <<"year is leap year\n" << endl;
  }
  else
  {
    cout <<"year is not leap year\n" << endl;
  }
  return 0;
}