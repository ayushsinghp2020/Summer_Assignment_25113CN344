//program to Create number guessing game:


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    int secret=rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout<<"Guess a number between 1 and 100:\n";

    do{
        cin>>guess;

        if(guess>secret)
            cout<<"Too High! Try Again.\n";
        else if(guess<secret)
            cout<<"Too Low! Try Again.\n";
        else
            cout<<"Congratulations! You guessed the number.\n";

    } while(guess != secret);

    return 0;
}