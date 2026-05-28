#include <iostream>
using namespace std;
int main(){
    int N, sum=0;

    cout << "enter a number";
    cin >> N;

    for(int i=1; i<= N; i++)
    {sum = sum + i;}
     
    cout << "sum of first" <<N<< "natural number is" <<sum;

  return 0;
}