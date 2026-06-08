#include <iostream>
using namespace std;

bool isPallindrome(int n){
  int original=n, rev=0;
  
  while(n>0){
    rev=rev*10+n%10;
    n/=10;
  }
  return(original==rev);
}
int main(){
  int n;

  cout<<"Enter a Number";
  cin>>n;

  if(isPallindrome(n))
    cout<<n<<"is a Pallindrome number";
  else
    cout<<n<<"is not a Pallindrome number";

  return 0;
}