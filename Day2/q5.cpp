#include <iostream>
using namespace std;

int main() {
  int num, sum=0, digit;

  cout<<"enter number";
  cin>>num;

  while(num>0){
    digit=num%10;
    sum+=digit;
    num=num/10; 
  }
  cout<<"sum of digits ="<<sum<<endl;

  return 0;

}