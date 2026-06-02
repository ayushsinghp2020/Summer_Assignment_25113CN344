#include <iostream>
using namespace std;

int main(){
  int n;

  cout<<"Enter a decimal number=";
  cin>>n;

  int binary[32], i=0;

  while(n>0){
      binary[i]=n%2;
      n=n/2;
      i++;
  }
  cout<<"Binary number=";
  for(int j=i-1; j>=0; j--){
    cout<<binary[j];
  }
  return 0;
}