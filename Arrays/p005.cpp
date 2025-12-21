/*
Given a list of numbers, find and print the first adjacent elements which have the same sign. If there is no such pair, leave the output blank.

input: 1 2 -3 -4 -5
output: 1 2

input: 1 -2 3 -4 5 6
output: 5 6
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the array Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    int arraySize = sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<arraySize; i++){
        if(arr[i-1]>0 && arr[i]>0){
            cout<<arr[i-1]<<" "<<arr[i]<<endl; //If you want only one answer break the loop.
            
        }else if(arr[i-1]<0 && arr[i]<0){
            cout<<arr[i-1]<<" "<<arr[i]<<endl; //If you want only one answer break the loop.
            
        }
    }
    return 0;
}