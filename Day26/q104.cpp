//program to Create quiz application


#include <iostream>
using namespace std;

int main(){
    int choice;
    int score=0;

    cout<<"----- SIMPLE QUIZ APPLICATION -----\n";

    // Question 1
    cout<<"\n1. What is the capital of India?\n";
    cout<<"1) Mumbai\n2) Delhi\n3) Kolkata\n4) Chennai\n";
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==2)
        score++;

    // Question 2
    cout<<"\n2. What is 2 + 2?\n";
    cout<<"1) 3\n2) 4\n3) 5\n4) 6\n";
    cout<<"Enter your answer: ";
    cin> choice;

    if(choice==2)
        score++;

    // Question 3
    cout<<"\n3. Which is a programming language?\n";
    cout<<"1) HTML\n2) HTTP\n3) C++\n4) WWW\n";
    cout<<"Enter your answer: ";
    cin>>choice;

    if(choice==3)
        score++;

    cout<<"\n----- RESULT -----\n";
    cout<<"Your score: " << score << " out of 3\n";

    return 0;
}