#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;

    cout<<"Enter a string: ";
    cin>>str;

    string rev="";

    for(int i=str.length()-1; i>=0; i--)
    {
        rev=rev+str[i];
    }
    if(str==rev)
        cout<<"Palindrome String";
    else
        cout<<"Not a Palindrome String";

    return 0;
}
