/*
Given an integer array arr[] and a number k. Find the count of distinct elements in every window of size k in the array.

Examples:

Input: arr[] = [1, 2, 1, 3, 4, 2, 3], k = 4
Output: [3, 4, 4, 3]
Explanation:
First window is [1, 2, 1, 3], count of distinct numbers is 3.
Second window is [2, 1, 3, 4] count of distinct numbers is 4.
Third window is [1, 3, 4, 2] count of distinct numbers is 4.
Fourth window is [3, 4, 2, 3] count of distinct numbers is 3.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  //1
    cout<<"Enter the size of the array :"<<endl;    //1
    cin>>n; //1

    vector<int> arr(n); //1
    cout<<"Enter the Array elements: "<<endl;   //1
    for(int i=0; i<n; i++){
        cin>>arr[i];                            //n
    }

    int k;  //1
    cout<<"Enter the Window size: "<<endl;  //1
    cin>>k; //1

    vector<int> ans;    //1
    unordered_map<int, int> freq;   //1

    for(int i=0; i<k; i++){
        freq[arr[i]]++;             //k times
    }
    ans.push_back(freq.size());     //1

    for(int i=k; i<n; i++){
        freq[arr[i-k]]--;           //n
        if(freq[arr[i-k]] == 0){
            freq.erase(arr[i-k]);   //1
        }
        freq[arr[i]]++;             //n

        ans.push_back(freq.size()); //n
    }
    cout<<"Distinct Elements count is: "<<endl;  //1
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";                      //n
    }
    cout<<endl;                                 //1
    return 0;                                   //1
}

/*
Total Time Complexity of this code is :

if k<=n -> O(n)

*/