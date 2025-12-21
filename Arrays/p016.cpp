/*
Reverse of an array.

input: [1,2,3,4,5]
output: [5,4,3,2,1]
*/

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the Size of the array: "<<endl;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<(n/2); i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}