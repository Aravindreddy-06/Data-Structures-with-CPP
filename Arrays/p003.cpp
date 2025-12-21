/*
Given a list of numbers, find and print all the elements that are greater than the previous element.

input: 1 5 2 4 3
output: 5 4

input: 1 2 3 4 5
output: 2 3 4 5
*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1 ,5 ,2 ,4 ,3};
    int i=0;
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(; i<arrSize-1; i++){
        if(arr[i]<arr[i+1]){
            cout<<arr[i+1]<<" ";
        }
    }
    return 0;
}