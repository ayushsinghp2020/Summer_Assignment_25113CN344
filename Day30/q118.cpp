//Write a program to Create mini library system


#include <iostream>
#include <string>
using namespace std;

int main(){
    const int SIZE=50;
    string book[SIZE];
    string author[SIZE];
    int n=0, choice;

    do{
        cout<<"\n----- Mini Library System -----";
        cout<<"\n1. Add Book";
        cout<<"\n2. Display Books";
        cout<<"\n3. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice) {
        case 1:
            cout<<"Enter Book Name: ";
            cin>>book[n];

            cout<<"Enter Author Name: ";
            cin>>author[n];

            n++;
            cout<<"Book Added Successfully!\n";
            break;

        case 2:
            if(n==0){
                cout<<"No Books Available!\n";
            }
            else{
                cout<<"\nBook Name\tAuthor\n";
                for (int i=0; i<n; i++)
                {
                    cout<<book[i]<<"\t\t"<<author[i]<<endl;
                }
            }
            break;

        case 3:
            cout<<"Thank You!\n";
            break;

        default:
            cout<<"Invalid Choice!\n";
        }
    } while(choice != 3);

    return 0;
}