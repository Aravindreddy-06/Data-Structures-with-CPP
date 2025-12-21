/*
https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
*/
//1-based index

#include<bits/stdc++.h>
using namespace std;

vector<int>subArraySum(vector<int>&arr, int target){
    int n = arr.size();     //1
    int i = 0, j = 0;       //1
    int curr_sum = arr[0];  //1
    while(j<n){                         //n
        if(curr_sum == target){
            return {i+1, j+1};          //1
        }else if(curr_sum > target){
            curr_sum -= arr[i];         //1
            i++;
        }else if(curr_sum < target){
            j++;
            curr_sum += arr[j];         //1
        }
    }
    if(curr_sum != target){ //If target not found return -1;
        return {-1};            //1
    }    
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];                            //n
    }
    int target;
    cout<<"Enter the target value: "<<endl;
    cin>>target;

    vector<int>ans = subArraySum(arr,target);       //1    
    for(int x : ans){
        cout<<x<<" ";                               //1
    }
    cout<<endl;
    return 0;
}