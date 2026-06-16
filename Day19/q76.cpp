#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the order of square matrix: ";
    cin>>n;

    int A[100][100];
    int diag_Sum=0;

    cout<<"Enter matrix elements:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>A[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        diag_Sum += A[i][i];
    }
    cout<<"Sum of diagonal elements = "<<diag_Sum<<endl;

    return 0;
}