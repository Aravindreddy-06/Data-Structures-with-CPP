/*
https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&category=Arrays,CPP&sortBy=submissions

Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.
Note: You need to solve this problem without utilizing the built-in sort function.

Examples:

Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.

Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of the array: "<<endl;
    cin>>n;
    vector<int>arr(n);

    cout<<"Enter the Elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int c0 = 0,c1 = 0,c2 = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 0){
            c0++;
        }else if(arr[i] == 1){
            c1++;
        }else{
            c2++;
        }
    }
    vector<int>ans;
    while(c0--){
        ans.push_back(0);
    }
    while(c1--){
        ans.push_back(1);
    }
    while(c2--){
        ans.push_back(2);
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}