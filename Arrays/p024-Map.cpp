/*
https://leetcode.com/problems/majority-element/description/?envType=problem-list-v2&envId=hash-table
*/

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
    int max_freq = INT_MIN;
    int element = -1;
    for(auto &p : freq){          //Here p is pair(element : count)
        if(p.second > max_freq){
            max_freq = p.second;  //p.second = count
            element = p.first;    //p.first = elements
        }
    }
    cout<<element<<endl;
    return 0;
}