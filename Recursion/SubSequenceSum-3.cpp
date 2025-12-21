/*
Count the Subsequences of the Array which is Equal to the sum K. 
*/

#include<bits/stdc++.h>
using namespace std;

int subsequence_sum(int index, int arr[], int sum, int n,int k){
    if(index == n){
        if(sum == k){
            return 1;
        }
        else return 0;
    }
    
    sum += arr[index];
    int l = subsequence_sum(index+1, arr, sum, n, k);

    sum -= arr[index];
    int r = subsequence_sum(index+1, arr, sum, n, k);

    return l+r;
}

int main(){
    int n;
    cout<<"Enter the Size of the Array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the K value: "<<endl;
    cin>>k;

    vector<int> v;

    cout<<subsequence_sum(0, arr, 0, n, k);
    return 0;
}