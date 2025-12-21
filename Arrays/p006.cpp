/*
Given a list of numbers, determine and print the quantity of elements that are greater than both of their neighbors.
The first and the last items of the list shouldn't be considered because they don't have two neighbors.

Input: 1 5 1 5 1
output: 2

input: 5 1 5 1 5
output: 1
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
    int count = 0 ;
    for(int i=1; i<n-1; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}