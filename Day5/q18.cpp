#include <iostream>
using namespace std;

int main(){
  int num, temp, digit, sum=0, fact;

  cout<<"Enter a Number=";
  cin>>num;

  temp=num;

  while(temp>0){
      digit=temp%10;
      fact=1;

      for(int i=1; i<=digit; i++){
          fact*=i;
      }
      sum+=fact;
      temp/=10;
  }
  if(sum==num)
     cout<<num<<" is a Strong Number";
  else
     cout<<num<<" is Not a Strong Number";

  return 0;
}