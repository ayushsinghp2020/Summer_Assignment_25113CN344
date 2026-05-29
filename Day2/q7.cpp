#include <iostream>
using namespace std;

int main(){
  int num, digit, product=1;

  cout<<"enter number";
  cin>>num;

  while(num>0){
    digit=num%10;
    product=product*digit;
    num=num/10;
  }
  cout<<"product of digits"<<product;
  
  return 0;
}