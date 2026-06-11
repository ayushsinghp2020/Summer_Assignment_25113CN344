#include <iostream>
using namespace std;

int main(){
  int num, rev=0, digit;

  cout<<"enter number";
  cin>>num;

  while(num>0){
    digit=num%10;
    rev=rev*10+digit;
    num=num/10;
  }
  cout<<"reversed number"<<rev;

  return 0;
}