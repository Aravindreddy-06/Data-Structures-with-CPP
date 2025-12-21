/*
Given a list of numbers, find and print all the list elements with an even index number. (i.e. A[0], A[2], A[4], ...).

input: 4 5 3 4 2 3
output: 4 3 2

*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {4 ,5 ,3 ,4 ,2 ,3};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<arrSize; i++){
        if(i%2 == 0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}