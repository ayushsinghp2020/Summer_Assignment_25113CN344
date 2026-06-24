//Write a program to Create bank account system:


#include <iostream>
using namespace std;

class Bank{
private:
    string name;
    int accNo;
    float balance;

public:
    void createAccount(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Account Number: ";
        cin>>accNo;
        balance=0;
        cout<<"Account Created Successfully!\n";
    }

    void deposit(){
        float amt;
        cout<<"Enter amount to deposit: ";
        cin>>amt;
        balance += amt;
        cout<<"Amount Deposited Successfully!\n";
    }
    void withdraw(){
        float amt;
        cout<<"Enter amount to withdraw: ";
        cin>>amt;

        if(amt<=balance){
            balance -= amt;
            cout<<"Amount Withdrawn Successfully!\n";
        } else{
            cout<<"Insufficient Balance!\n";
        }
    }
    void display(){
        cout<<"\n--- Account Details ---\n";
        cout<<"Name: " << name<<endl;
        cout<<"Account No: "<<accNo<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    Bank b;
    int choice;

    do{
        cout<<"\n===== Bank Menu =====\n";
        cout<<"1. Create Account\n";
        cout<<"2. Deposit\n";
        cout<<"3. Withdraw\n";
        cout<<"4. Display Account\n";
        cout<<"5. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice) {
            case 1: b.createAccount(); break;
            case 2: b.deposit(); break;
            case 3: b.withdraw(); break;
            case 4: b.display(); break;
            case 5: cout<<"Exiting...\n"; break;
            default: cout<<"Invalid choice!\n";
        }
    } while(choice != 5);

    return 0;
}