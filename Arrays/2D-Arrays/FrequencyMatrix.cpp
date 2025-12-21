/*
Frequency of a given number in the matrix
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
    int element;
    cout<<"Enter the target: "<<endl;
    cin>>element;

    int freq = 0;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(A[i][j] == element){
                freq++;
            }
        }
    }
    cout<<"Frequency of the Element "<<element<<" is: "<<freq<<endl;
    return 0;
}