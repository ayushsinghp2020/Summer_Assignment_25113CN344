#include <iostream>
using namespace std;

int main(){
    long long num, largest=0;
    cout<<"Enter a Number=";
    cin>>num;

    for(long long i=2; i<=num; i++){
        while(num%i==0){
          largest=i;
          num/=i;
        }
   }
   cout<<"Largest Prime Factor="<<largest;

   return 0;
}