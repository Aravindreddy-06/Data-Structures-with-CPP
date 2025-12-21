/*
https://leetcode.com/problems/unique-number-of-occurrences/description/?envType=problem-list-v2&envId=array*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the array Elements: "<<endl;
    for(int i = 0; i<arr.size(); i++){
        cin>>arr[i];
    }

    unordered_map<int, int> freq;   //using map to store the pair of integer values

    for(int x : arr){             //counting the frequency of elements
        freq[x]++;
    }
    unordered_set<int> seen;
    bool isUnique = true;
    for(auto &p : freq){
        if(seen.count(p.second)){
            isUnique = false;
            break;
        }
        seen.insert(p.second);
    }

    if(isUnique){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}