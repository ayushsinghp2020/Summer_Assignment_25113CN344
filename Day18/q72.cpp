#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    // Sorting in descending order (Bubble Sort logic)
    for(int i=0; i< n-1; i++) {
        for(int j=0; j< n-1-i; j++) {
            if(arr[j]<arr[j+1]) { 
                int temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Array in descending order: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i] << " ";
    }
    return 0;
}