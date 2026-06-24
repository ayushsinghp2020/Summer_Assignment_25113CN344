//Write a program to Create contact management system:


#include <iostream>
using namespace std;

int MAX= 100;

string name[100];
string phone[100];
int countContacts=0;

// Add contact
void addContact(){
    cout<<"Enter Name: ";
    cin>>name[countContacts];

    cout<<"Enter Phone Number: ";
    cin>>phone[countContacts];

    countContacts++;
    cout<<"Contact Added!\n";
}

// Display contacts
void displayContacts() {
    if(countContacts==0) {
        cout<<"No contacts available!\n";
        return;
    }

    for(int i=0; i<countContacts; i++) {
        cout<<"Name: "<<name[i]
            <<" | Phone: "<<phone[i]<<endl;
    }
}

// Search contact
void searchContact(){
    string search;
    cout<<"Enter name to search: ";
    cin>>search;

    for(int i=0; i<countContacts; i++) {
        if(name[i]==search) {
            cout<<"Contact Found!\n";
            cout<<"Name: "<<name[i]
                <<" | Phone: "<<phone[i]<<endl;
            return;
        }
    }
    cout<<"Contact not found!\n";
}
int main(){
    int choice;

    do{
        cout<<"\n===== Contact Management System =====\n";
        cout<<"1. Add Contact\n";
        cout<<"2. Display Contacts\n";
        cout<<"3. Search Contact\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice) {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: cout<<"Exiting...\n"; break;
            default: cout<<"Invalid choice!\n";
        }
    } while(choice != 4);

    return 0;
}