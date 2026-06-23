//Write a program to Create salary management system:


#include <iostream>
using namespace std;

int main(){
    int empId[100], basicSalary[100];
    string empName[100];
    int n=0, choice, searchId;

    do{
        cout<<"\n--- Salary Management System ---\n";
        cout<<"1. Add Employee Salary Details\n";
        cout<<"2. Display Salary Details\n";
        cout<<"3. Search Employee Salary\n";
        cout<<"4. Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Enter Employee ID: ";
            cin>>empId[n];

            cout<<"Enter Employee Name: ";
            cin>>empName[n];

            cout<<"Enter Basic Salary: ";
            cin>>basicSalary[n];

            n++;
            cout<<"Record Added Successfully!\n";
            break;

        case 2:
            cout<<"\nEmployee Salary Records:\n";
            for(int i=0; i<n; i++)
            {
                cout<<"ID: "<<empId[i]
                    <<"\tName: "<<empName[i]
                    <<"\tSalary: "<<basicSalary[i]
                    <<endl;
            }
            break;

        case 3:
            cout<<"Enter Employee ID to Search: ";
            cin>>searchId;

            for(int i=0; i<n; i++)
            {
                if(empId[i]==searchId)
                {
                    cout<<"\nEmployee Found!\n";
                    cout<<"ID: "<<empId[i]<<endl;
                    cout<<"Name: "<<empName[i]<<endl;
                    cout<<"Salary: "<<basicSalary[i]<<endl;
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