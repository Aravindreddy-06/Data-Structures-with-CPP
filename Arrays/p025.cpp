/*
https://leetcode.com/problems/merge-sorted-array/?envType=problem-list-v2&envId=array
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cout<<"Enter the size of the array1 : "<<endl;
    cin>>m;
    vector<int>array1(m);
    cout<<"Enter the values if the array1: "<<endl;
    for(int i = 0; i<m; i++){
        cin>>array1[i];
    }

    int n;
    cout<<"Enter the size of the array2 : "<<endl;
    cin>>n;
    vector<int>array2(n);
    cout<<"Enter the values if the array2: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>array2[i];
    }

    for(int i = 0; i<n; i++){
        array1.push_back(array2[i]);
    }
    sort(array1.begin(), array1.end());

    for(int i = 0; i<array1.size(); i++){
        cout<<array1[i]<<"  ";
    }
    return 0;
}