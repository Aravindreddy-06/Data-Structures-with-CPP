//Sort the Array in ascending order.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    int arrLength = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter the Array Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    sort(arr , arr + arrLength);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}