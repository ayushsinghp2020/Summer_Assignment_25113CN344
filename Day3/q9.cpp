#include <iostream>
using namespace std;

int main(){
  int n, i;
  bool prime=true;
  
  cout<<"enter number";
  cin>>n;

  if(n<=1){
    prime=false;
  }else{
    for(i=2; i<=n/2; i++) {
      if(n%i==0) {
        prime=false;
        break;
      }
    }
  }
  if(prime)
     cout<<n<<"Prime Number";
  else
     cout<<n<<"Not a Prime Number";

     return 0;
}