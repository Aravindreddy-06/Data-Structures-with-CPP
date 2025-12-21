/*
Given a list of numbers, count how many element pairs have the same value (are equal).
Any two elements that are equal to each other should be counted exactly once.

input: 1 2 3 2 3
output: 2

input: 1 1 1 1 1
ouput: 10
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the Elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}