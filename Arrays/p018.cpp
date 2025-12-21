/*
https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&category=Arrays,CPP&sortBy=submissions

Given an array arr[] containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value target.
You need to return the 1-based indices of the leftmost and rightmost elements of this subarray. 
You need to find the first subarray whose sum is equal to the target.

Note: If no such array is possible then, return [-1].

Examples:

Input: arr[] = [1, 2, 3, 7, 5], target = 12
Output: [2, 4]
Explanation: The sum of elements from 2nd to 4th position is 12.

Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], target = 15
Output: [1, 5]
Explanation: The sum of elements from 1st to 5th position is 15.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // code here
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector <int> arr(n);

    cout<<"Enter the values of the array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target value: "<<endl;
    cin>>target;

    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        int j = i;
        for(; sum<target && j<arr.size(); j++){
            sum = sum + arr[j];   
        }
        if(sum == target){
            cout<<(i+1)<<" "<<j<<endl;
            break;
        }
        sum = 0;
    }
    if(sum!= target){
        cout<<"-1"<<endl;
    }
    return 0;
}
