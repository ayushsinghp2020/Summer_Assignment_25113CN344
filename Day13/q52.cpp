#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    int evenCount=0, oddCount=0;

    cout<<"Enter number of Elements=";
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>arr[i];

        if(arr[i]%2==0)
            evenCount++;
        else
            oddCount++;
    }
    cout<<"Even elements="<<evenCount<<endl;
    cout<<"Odd elements="<<oddCount<<endl;

    return 0;
}