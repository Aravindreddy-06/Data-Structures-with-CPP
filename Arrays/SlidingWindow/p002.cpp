/*
https://www.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cout<<"Enter the K value: "<<endl;
    cin>>k;

    vector<int> newArr;
    int i=0, j = k-1;
    while(j<n){
        int maxx = INT_MIN;

        for(int x = i; x<=j; x++){
            if(arr[x] > maxx){
                maxx = arr[x];
            }
        }
        newArr.push_back(maxx);
        i++;
        j++;
    }
    for(int i=0; i<newArr.size(); i++){
        cout<<newArr[i]<<" ";
    }
    return 0;
}