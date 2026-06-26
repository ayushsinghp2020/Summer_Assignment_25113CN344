//Write a program to Create mini employee management system.


#include <iostream>
#include <string>
using namespace std;

int main(){
    const int SIZE=50;
    int empID[SIZE];
    string empName[SIZE];
    float salary[SIZE];

    int n=0, choice;

    do{
        cout<<"\n----- Employee Management System -----";
        cout<<"\n1. Add Employee";
        cout<<"\n2. Display Employees";
        cout<<"\n3. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch (choice){
        case 1:
            cout<<"\nEnter Employee ID: ";
            cin>>empID[n];

            cout<<"Enter Employee Name: ";
            cin>>empName[n];

            cout<<"Enter Salary: ";
            cin>>salary[n];

            n++;
            cout<<"Employee Record Added Successfully!\n";
            break;

        case 2:
            if(n==0) {
                cout<<"\nNo Employee Records Found!\n";
            }
            else{
                cout<<"\nID\tName\tSalary\n";
                for (int i=0; i<n; i++)
                {
                    cout<<empID[i]<<"\t"
                        <<empName[i]<<"\t"
                        <<salary[i]<<endl;
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