#include <iostream>
using namespace std;

int main() {
  int start, end, n, temp, rem, sum;
   
  cout<<"enter starting no=";
  cin>>start;
  
  cout<<"enter ending no=";
  cin>>end;

  for(n=start; n<=end; n++) {
    temp=n;
    sum=0;

    while(temp>0) {
    rem=temp%10;
    sum+=rem*rem*rem;
    temp/=10;
    }
    if(sum==n)
       cout<<n<<" ";
  }
  return 0;
}