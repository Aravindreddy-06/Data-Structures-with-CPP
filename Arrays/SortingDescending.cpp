//Sort the Array in Descending order.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the Array: "<<endl;
    cin>>n;
    int arr[n];
    int arrLength = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter the Array Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr , arr + n, greater<int>());
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}