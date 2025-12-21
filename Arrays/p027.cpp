/*
https://leetcode.com/problems/two-sum/description/

Works only for sorted array.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target){
    int i = 0, j = arr.size()-1;
    while(i<j){
        if(arr[i] + arr[j] == target){
            return {i , j};
        }else if(arr[i] + arr[j] < target){
            i++;
        }else{
            j--;
        }
    }
    return {};
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the values of the array: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target value: "<<endl;
    cin>>target;

    vector<int> result = twoSum(arr,target);

    if(!result.empty()){
        cout<<"Indices: "<<result[0]<<" "<<result[1]<<endl;
    }else{
        cout<<"Indices Not Found"<<endl;
    }
    return 0;
}