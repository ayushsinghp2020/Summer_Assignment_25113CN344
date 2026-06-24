//Write a program to Create ticket booking system.


#include <iostream>
using namespace std;

class Ticket{
private:
    int tickets;
    float price;

public:
    void init(){
        tickets=50;   // total available tickets
        price=100;    // price per ticket
    }

    void showAvailable(){
        cout<<"Available Tickets: "<<tickets<<endl;
        cout<<"Price per Ticket: " << price<<endl;
    }
    void bookTicket(){
        int n;
        cout<<"Enter number of tickets to book: ";
        cin>>n;

        if(n<=tickets) {
            tickets -= n;
            cout<<"Booking Successful!\n";
            cout<<"Total Amount: "<<n*price<<endl;
        } else{
            cout<<"Not enough tickets available!\n";
        }
    }
    void cancelTicket(){
        int n;
        cout<<"Enter number of tickets to cancel: ";
        cin>>n;

        tickets += n;
        cout<<"Tickets Cancelled Successfully!\n";
    }
};
int main(){
    Ticket t;
    t.init();

    int choice;

    do{
        cout<<"\n===== Ticket Booking System =====\n";
        cout<<"1. Show Available Tickets\n";
        cout<<"2. Book Ticket\n";
        cout<<"3. Cancel Ticket\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice) {
            case 1: t.showAvailable(); break;
            case 2: t.bookTicket(); break;
            case 3: t.cancelTicket(); break;
            case 4: cout<<"Exiting...\n"; break;
            default: cout<<"Invalid choice!\n";
        }
    } while(choice != 4);

    return 0;
}