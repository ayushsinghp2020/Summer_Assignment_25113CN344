//program to Create ATM simulation


#include <iostream>
using namespace std;

int main(){
    int balance=1000, choice, amount;

    while(true){
        cout<<"\n----- ATM MENU -----\n";
        cout<<"1. Check Balance\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Your balance is: "<<balance<<endl;
                break;

            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                balance += amount;
                cout<<"Deposited successfully!\n";
                break;

            case 3:
                cout<<"Enter amount to withdraw: ";
                cin>>amount;

                if(amount<=balance) {
                    balance -= amount;
                    cout<<"Please collect your cash!\n";
                } else{
                    cout<<"Insufficient balance!\n";
                }
                break;

            case 4:
                cout<<"Thank you for using ATM!\n";
                return 0;

            default:
                cout<<"Invalid choice!\n";
        }
    }
    return 0;
}