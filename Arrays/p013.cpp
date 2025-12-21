/*
Find the missing number of the series in an array.

input: 1 2 3 5
output: 4
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
    
    int sum_Of_Natural = ((n+2)*(n+1))/2;

    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    int ans = sum_Of_Natural - sum;
    cout<<"Missing Element is: "<<ans<<endl;
    return 0;
}

