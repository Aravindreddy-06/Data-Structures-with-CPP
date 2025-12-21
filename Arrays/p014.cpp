/*
Find the Second Largest Element in an array.

input: [12, 35, 1, 10, 34, 1]
output: 34
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
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest = arr[i];
        }
    }
    if(secondLargest == INT_MIN){
        cout<<-1<<endl;
    }else{
        cout<<secondLargest<<endl;
    }

    return 0;
}

