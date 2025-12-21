/*
Given a list of numbers, find and print the elements that appear in the list only once. 
The elements must be printed in the order in which they occur in the original list.

input: 4 3 5 2 5 1 3 5
output: 4 2 1 

input: 6 9 6 23 12 19 14 26
output: 9 23 12 19 14 26
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
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<arr[i]<<" ";
        }
        count = 0;
    }
    return 0;
}