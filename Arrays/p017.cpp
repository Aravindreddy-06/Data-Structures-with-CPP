/*
Find the Third Largest element in an array.

input:[1,2,3,4,5]
output:[3]
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the Size of the array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;
    int third_largest = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            third_largest = second_largest;
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_largest && arr[i]<largest){
            third_largest = second_largest;
            second_largest = arr[i];
        }
        else if(arr[i]>third_largest && arr[i]<second_largest){
            third_largest = arr[i];
        }
    }
    cout<<"Third Largest Element is: "<<third_largest<<endl;
    return 0;
}