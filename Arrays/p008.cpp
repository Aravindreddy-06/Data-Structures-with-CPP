/*
Given a list of numbers with all of its elements sorted in ascending order, determine and print the quantity of distinct(Unique) elements in it.

input: 1 1 2 2 2 3 4 5 6 7
output: 7

input : -64 -45 -38 -16 -14 -7 2 53 70 80 80
output: 10
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
    int count  = 1;
    for(int i=0; i<n-1; i++){
        if(arr[i]!= arr[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}