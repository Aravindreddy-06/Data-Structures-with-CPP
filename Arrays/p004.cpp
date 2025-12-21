/*
Sum of array elements.

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0;
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<arrSize; i++){
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
    return 0;
}