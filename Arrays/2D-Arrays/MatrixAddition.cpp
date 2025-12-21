/*
Additon of two matrices.
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

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    cout<<"Enter the Matrix1 Elements: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter the Matrix2 Elements: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix2[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout<<"Resultant Matrix is: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}