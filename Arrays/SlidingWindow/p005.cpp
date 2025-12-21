/*
https://leetcode.com/problems/minimum-size-subarray-sum/description/?envType=problem-list-v2&envId=sliding-window

Given an array of positive integers nums and a positive integer target,
return the minimal length of a subarray whose sum is greater than or equal to target. 
If there is no such subarray, return 0 instead.

Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1
Example 3:

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; //1
    cout<<"Enter the size of the array :"<<endl; //1
    cin>>n;                                      //1

    vector<int> arr(n);                          //1
    cout<<"Enter the Array elements: "<<endl;       //1
    for(int i=0; i<n; i++){
        cin>>arr[i];                                //n
    }

    int target;                                     //1
    cout<<"Enter the target value: "<<endl;         //1
    cin>>target;                                    //1

    int i=0, j=0; //1
    int curr_sum = 0;   //1
    int minLen = INT_MAX;   //1

    while(j<n){                 
        curr_sum += arr[j];     //n

        while(curr_sum >= target){
            minLen = min(minLen , j-i+1);   //1
            curr_sum -= arr[i];             //n 
            i++;
        }
        j++;
    }
    if(minLen == INT_MAX){
        cout<<0<<endl;                  //1
    }else{
       cout<<minLen<<endl;              //1
    }
    return 0;                           //1
}

/*
Total Time Complexity of this code is :

-> O(n)

*/