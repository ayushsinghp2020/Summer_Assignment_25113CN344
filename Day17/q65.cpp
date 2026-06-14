#include <iostream>
using namespace std;

int main(){
    int n1, n2;

    cout<<"Enter size of first array: ";
    cin>>n1;

    int arr_1[n1];
    cout<<"Enter elements of first array: ";
    for(int i=0; i<n1; i++) {
       cin>>arr_1[i];
    }
    cout<<"Enter size of second array: ";
    cin>>n2;

    int arr_2[n2];
    cout<<"Enter elements of second array: ";
    for(int i=0; i<n2; i++) {
       cin>>arr_2[i];
    }
    int merged[n1 + n2];

    for(int i=0; i<n1; i++) {
       merged[i]=arr_1[i];
    }
    for(int i=0; i<n2; i++) {
        merged[n1+i] = arr_2[i];
    }
    cout<<"Merged array: ";
    for(int i=0; i< n1+n2; i++) {
        cout<<merged[i] << " ";
    }
    return 0;
}