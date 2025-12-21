/*
Given a list of unique numbers, swap the minimal and maximal elements of this list. Print the resulting list.

input: 3 4 5 2 1
ouptut: 3 4 1 2 5

input: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 17 16 15 14
output: 18 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 1 17 16 15 14
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
    int maxIndex = 0;
    int minIndex = 0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[maxIndex]){
            maxIndex = i;
        }
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
    }
    
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}