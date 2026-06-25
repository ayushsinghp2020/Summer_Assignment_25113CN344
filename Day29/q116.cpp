//Write a program to Create inventory management system:


#include <iostream>
using namespace std;

int id, qty;

void input(){
    cout<<"Enter Product ID: ";
    cin>>id;

    cout<<"Enter Quantity: ";
    cin>>qty;
}

void display(){
    cout<<"\nProduct ID: "<<id;
    cout<<"\nQuantity: "<<qty<<endl;
}

int main(){
    int choice;

    do{
        cout<<"\n--- Inventory Management System ---";
        cout<<"\n1. Input Product";
        cout<<"\n2. Display Product";
        cout<<"\n3. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                input();
                break;

            case 2:
                display();
                break;

            case 3:
                cout<<"Exiting Program...";
                break;

            default:
                cout<<"Invalid Choice!";
        }
    } while(choice != 3);

    return 0;
}