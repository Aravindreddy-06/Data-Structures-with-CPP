/*
transposing the matrix.

Example:
input: 1 2 3
       4 5 6

output:1 4
       2 5
       3 6
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the row size: "<<endl;
    cin>>rows;

    int cols;
    cout<<"Enter the column size: "<<endl;
    cin>>cols;

    int A[100][100], T[100][100];

    cout<<"Enter the A Elements: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>A[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            T[j][i] = A[i][j];
        }
    }

    cout<<"Resultant Matrix is: "<<endl;
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
