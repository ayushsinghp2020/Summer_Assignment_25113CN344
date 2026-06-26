//Write a program to Develop complete mini project using arrays, strings and functions.


#include <iostream>
#include <string>
using namespace std;

const int SIZE=50;

int roll[SIZE];
string name[SIZE];
int marks[SIZE];
int n=0;

// Function to add student
void addStudent()
{
    cout<<"\nEnter Roll Number: ";
    cin>>roll[n];

    cout<<"Enter Name: ";
    cin>>name[n];

    cout<<"Enter Marks: ";
    cin>>marks[n];

    n++;
    cout<<"Student Record Added Successfully!\n";
}

// Function to display students
void displayStudents()
{
    if (n==0){
        cout<<"\nNo Records Found!\n";
        return;
    }
    cout<<"\nRoll\tName\tMarks\n";
    for (int i=0; i<n; i++)
    {
        cout<<roll[i]<<"\t"<<name[i]<<"\t"<<marks[i]<<endl;
    }
}

// Function to search student
void searchStudent(){
    int r;
    bool found=false;

    cout<<"\nEnter Roll Number to Search: ";
    cin>>r;

    for (int i=0; i<n; i++){
        if(roll[i]==r)
        {
            cout<<"\nRecord Found\n";
            cout<<"Roll Number : "<<roll[i]<<endl;
            cout<<"Name        : "<<name[i]<<endl;
            cout<<"Marks       : "<<marks[i]<<endl;
            found=true;
            break;
        }
    }
    if (!found)
        cout<<"Record Not Found!\n";
}
int main(){
    int choice;

    do{
        cout<<"\n===== Student Management System =====";
        cout<<"\n1. Add Student";
        cout<<"\n2. Display Students";
        cout<<"\n3. Search Student";
        cout<<"\n4. Exit";
        cout<<"\nEnter Your Choice: ";
        cin>>choice;

        switch(choice){
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            cout<<"\nThank You!";
            break;

        default:
            cout<<"\nInvalid Choice!";
        }

    } while(choice != 4);

    return 0;
}