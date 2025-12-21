/*
Given a list of numbers, swap adjacent items in pairs (A[0] with A[1], A[2] with A[3], etc.). Print the resulting list.
 If a list has an odd number of elements, leave the last element in place.
Input: 1 2 3 4 5
output: 2 1 4 3 5

input: 4 5 3 4 2 3
output: 5 4 4 3 3 2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];         //n

    cout<<"Enter the Elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];        //n
    }

    int temp = 0;           //1
    for(int i=0; i+1<n; i=i+2){      // n/2 -> n times  
        temp = arr[i];          
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";              //n
    }
    return 0;
}