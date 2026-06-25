//Write a program to Create menu-driven string operations system:


#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[100];
    int choice;

    cout<<"Enter a string: ";
    cin.getline(str, 100);

    do{
        cout<<"\n--- STRING OPERATIONS MENU ---";
        cout<<"\n1. Find Length";
        cout<<"\n2. Reverse String";
        cout<<"\n3. Display String";
        cout<<"\n4. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Length of string = "<<strlen(str);
                break;

            case 2:
                cout<<"Reversed String: ";
                for (int i=strlen(str)-1; i>=0; i--) {
                    cout<<str[i];
                }
                cout<<endl;
                break;

            case 3:
                cout<<"String: "<<str<<endl;
                break;

            case 4:
                cout<<"Exiting Program...";
                break;

            default:
                cout<<"Invalid Choice!";
        }
    } while(choice != 4);

    return 0;
}