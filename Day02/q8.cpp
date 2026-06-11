#include <iostream>
using namespace std;
 
int main(){
  int num, original, rev=0, digit;

  cout<<"enter number";
  cin>>num;
   
  original=num;
  while(num>0){
    digit=num%10;
    rev=rev*10+digit;
    num=num/10;
  
  }
  if (original==rev)
      cout<<"palindrome";
  else 
      cout<<"not palindrome";

      return 0;
}