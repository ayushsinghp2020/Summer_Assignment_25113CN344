//Write a program to Create student record system using arrays and strings:


#include <iostream>
#include <string>
using namespace std;

int main(){
    const int SIZE=50;
    int roll[SIZE];
    string name[SIZE];
    int marks[SIZE];

    int n=0, choice;

    do{
        cout<<"\n----- Student Record System -----";
        cout<<"\n1. Add Student";
        cout<<"\n2. Display Students";
        cout<<"\n3. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice) {
        case 1:
            cout<<"\nEnter Roll Number: ";
            cin>>roll[n];

            cout<<"Enter Name: ";
            cin>>name[n];

            cout<<"Enter Marks: ";
            cin>>marks[n];

            n++;
            cout<<"Record Added Successfully!\n";
            break;

        case 2:
            if(n==0){
                cout<<"\nNo Records Found!\n";
            }
            else{
                cout<<"\nRoll\tName\tMarks\n";
                for (int i=0; i<n; i++)
                {
                    cout<<roll[i]<<"\t"
                        <<name[i]<<"\t"
                        <<marks[i]<<endl;
                }
            }
            break;

        case 3:
            cout<<"\nThank You!";
            break;

        default:
            cout<<"\nInvalid Choice!";
        }
    } while(choice != 3);

    return 0;
}