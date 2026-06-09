#include <iostream>
using namespace std;

int main(){
    int n, arr[100], sum=0;
    float avg;

    cout<<"Enter number of Elements=";
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=(float)sum/n;

    cout<<"Sum="<<sum<<endl;
    cout<<"Average="<<avg;

    return 0;
}