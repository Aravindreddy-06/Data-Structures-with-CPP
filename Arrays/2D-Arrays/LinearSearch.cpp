/*
Subtraction of two matrices.
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
    int target;
    cout<<"Enter the Target: "<<endl;
    cin>>target;

    bool found = false;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(A[i][j] == target){
                cout<<"Position Found at: "<<"R:"<<i<<","<<"C:"<<j<<endl;
                found = true;
            }
        }
    }
    if(!found){
        cout<<"Element not found"<<endl;
    }
    return 0;
}