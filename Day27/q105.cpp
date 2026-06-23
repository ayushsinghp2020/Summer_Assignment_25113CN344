//Write a program to Create student record management system:


#include <iostream>
using namespace std;

int main(){
    int roll[100], n=0, choice, searchRoll;
    string name[100];

    do{
        cout<<"\n--- Student Record Management System ---\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice){
        case 1:
            cout<<"Enter Roll Number: ";
            cin>>roll[n];

            cout<<"Enter Name: ";
            cin>>name[n];

            n++;
            cout<<"Record Added Successfully!\n";
            break;

        case 2:
            cout<<"\nStudent Records:\n";
            for(int i=0; i<n; i++)
            {
                cout<<"Roll No: "<<roll[i]
                    <<"  Name: "<<name[i]<<endl;
            }
            break;

        case 3:
            cout<<"Enter Roll Number to Search: ";
            cin>>searchRoll;

            for(int i=0; i<n; i++)
            {
                if(roll[i]==searchRoll)
                {
                    cout<<"Student Found!\n";
                    cout<<"Roll No: "<<roll[i]
                        <<"\nName: "<<name[i]<<endl;
                    break;
                }
            }
            break;

        case 4:
            cout<<"Exiting Program...\n";
            break;

        default:
            cout<<"Invalid Choice!\n";
        }
    } while(choice != 4);

    return 0;
}