//Write a program to Create menu-driven array operations system:


#include <iostream>
using namespace std;

int main(){
    int arr[50], n, choice, key;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    do{
        cout<<"\n--- Array Operations Menu ---\n";
        cout<<"1. Display Array\n";
        cout<<"2. Search Element\n";
        cout<<"3. Find Largest Element\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Array Elements: ";
                for (int i=0; i<n; i++) {
                    cout<<arr[i] << " ";
                }
                cout<<endl;
                break;

            case 2:
                cout<<"Enter element to search: ";
                cin>>key;

                for(int i=0; i<n; i++) {
                    if(arr[i]==key) {
                        cout<<"Element found at position "<< i+1 <<endl;
                        break;
                    }
                }
                break;

            case 3:
                int largest;
                largest=arr[0];

                for(int i=1; i<n; i++) {
                    if(arr[i]>largest) {
                        largest=arr[i];
                    }
                }
                cout<<"Largest element = "<<largest<<endl;
                break;

            case 4:
                cout<<"Exiting Program..."<<endl;
                break;

            default:
                cout<<"Invalid Choice!"<<endl;
        }

    } while(choice != 4);

    return 0;
}