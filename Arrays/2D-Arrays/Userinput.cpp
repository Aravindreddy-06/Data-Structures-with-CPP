//taking input from the user.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the Row Size: "<<endl;
    cin>>rows;
    
    int cols;
    cout<<"Enter the column Size: "<<endl;
    cin>>cols;

    int matrix[100][100];
    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"Matrix is: "<<endl;    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}