//Write a program to Create library management system.


#include <iostream>
using namespace std;

int id[100], issued[100];
int n=0;

void addBook(){
    cout<<"Enter Book ID: ";
    cin>>id[n];
    issued[n]=0;
    n++;
    cout<<"Book Added!\n";
}
void displayBooks(){
    for(int i=0; i<n; i++) {
        cout<<"ID: "<<id[i]
            <<" | Status: "<<(issued[i] ? "Issued" : "Available")<<endl;
    }
}
void issueBook(){
    int x;
    cout<<"Enter Book ID: ";
    cin>>x;

    for(int i=0; i<n; i++) {
        if(id[i]==x && !issued[i]) {
            issued[i]=1;
            cout<<"Book Issued!\n";
            return;
        }
    }
    cout<<"Book not available!\n";
}
void returnBook(){
    int x;
    cout<<"Enter Book ID: ";
    cin>>x;

    for(int i=0; i<n; i++) {
        if(id[i]==x && issued[i]) {
            issued[i]=0;
            cout<<"Book Returned!\n";
            return;
        }
    }
    cout<<"Invalid ID!\n";
}
int main(){
    int choice;

    do{
        cout<<"\n===== Library System =====\n";
        cout<<"1. Add Book\n";
        cout<<"2. Display Books\n";
        cout<<"3. Issue Book\n";
        cout<<"4. Return Book\n";
        cout<<"5. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch (choice){
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 5: cout<<"Exiting...\n"; break;
            default: cout<<"Invalid choice!\n";
        }
    } while(choice != 5);

    return 0;
}