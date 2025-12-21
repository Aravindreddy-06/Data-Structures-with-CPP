/*
Given an array arr, count the number of distinct triplets (a, b, c) such that:
a + b = c
Each triplet is counted only once, regardless of the order of a and b.

Examples:

Input: arr[] = [1, 5, 3, 2]
Output: 2 
Explanation: There are 2 triplets: 1 + 2 = 3 and 3 + 2 = 5

Input: arr[] = [2, 3, 4]
Output: 0
Explanation: No such triplet exits

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int count = 0;
    int sum = 0;
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector <int> arr(n);

    cout<<"Enter the values of the array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            sum = arr[i] + arr[j];

            for(int k=0; k<arr.size(); k++){
                if(arr[k] == sum){
                    count++;
                    break;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}