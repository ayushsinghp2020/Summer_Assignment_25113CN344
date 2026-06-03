#include <iostream>
using namespace std;

int rev = 0;
int reverse_Number(int n){
    if(n==0)
       return rev;

    rev=rev*10 + n%10;
    return reverse_Number(n/10);
}
int main(){
    int num;

    cout<<"Enter number=";
    cin>>num;

    cout<<"Reversed number="<<reverse_Number(num);

    return 0;
}