/*
print Only One Subsequence of the Array which is Equal to the sum K. 
*/

#include<bits/stdc++.h>
using namespace std;

bool subsequence_sum(int index, int arr[], vector<int> &v, int sum, int n,int k){
    if(index == n){
        if(sum == k){
            for(auto x : v){
                cout<<x<<" ";
            }
            cout<<endl;
            return true;
        }
        else return false;
    }
    v.push_back(arr[index]);
    sum += arr[index];
    if(subsequence_sum(index+1, arr, v, sum, n, k) == true) return true;

    sum -= arr[index];
    v.pop_back();
    if(subsequence_sum(index+1, arr, v, sum, n, k) == true) return true;
    
    return false;
}

int main(){
    int n;
    cout<<"Enter the Size of the Array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the K value: "<<endl;
    cin>>k;

    vector<int> v;

    subsequence_sum(0, arr, v, 0, n, k);
    return 0;
}