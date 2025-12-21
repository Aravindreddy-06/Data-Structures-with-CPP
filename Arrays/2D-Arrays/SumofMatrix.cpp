/*
Sum of the elements in the matrix.

Example:
input: 1 2 3
       4 5 6

output: 21
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

    int A[100][100];

    cout<<"Enter the A Elements: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>A[i][j];
        }
    }

    int sum = 0;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum = sum + A[i][j];
        }
    }
    cout<<"Sum of the Elements in a matrix is: "<<sum<<endl;
    return 0;
}