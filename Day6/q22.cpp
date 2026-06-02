#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    int decimal=0, i=0, rem;

    cout<<"Enter a binary number=";
    cin>>n;

    while(n !=0){
      rem=n%10;
      decimal+=rem*pow(2,i);
      n/=10;
      i++;
    }
    cout<<"Decimal Number="<<decimal;

    return 0;
}