/*
https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1?page=1&category=Arrays,CPP&sortBy=submissions

Given an integer array arr[] and an integer k, your task is to find and return the kth smallest element in the given array.

Examples :

Input: arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output: 5
Explanation: 4th smallest element in the given array is 5.

Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output: 7
Explanation: 3rd smallest element in the given array is 7.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int>arr(n);

    cout<<"Enter the array Elements :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the k value: "<<endl;
    cin>>k;

    sort(arr.begin(), arr.end());

    int kth_smallest = arr[k - 1];

    cout<<"Kth Smallest Element is: "<<kth_smallest<<endl;

    return 0;
}