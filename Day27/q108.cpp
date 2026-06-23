//Write a program to Create marksheet generation system:


#include <iostream>
using namespace std;

int main(){
    string name;
    int rollNo;
    float m1, m2, m3, total, percentage;

    cout<<"----- Marksheet Generation System -----\n";

    cout<<"Enter Student Name: ";
    cin>>name;

    cout<<"Enter Roll Number: ";
    cin>>rollNo;

    cout<<"Enter Marks of Subject 1: ";
    cin>>m1;

    cout<<"Enter Marks of Subject 2: ";
    cin>>m2;

    cout<<"Enter Marks of Subject 3: ";
    cin>>m3;

    total=m1+m2+m3;
    percentage=total/3;

    cout<<"\n----- MARKSHEET -----\n";
    cout<<"Name       : "<<name<<endl;
    cout<<"Roll Number: "<<rollNo<<endl;
    cout<<"Subject 1  : "<<m1<<endl;
    cout<<"Subject 2  : "<<m2<<endl;
    cout<<"Subject 3  : "<<m3<<endl;
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Percentage : "<<percentage<<"%"<<endl;

    if(percentage>=40)
        cout<<"Result     : PASS"<<endl;
    else
        cout<<"Result     : FAIL"<<endl;

    return 0;
}