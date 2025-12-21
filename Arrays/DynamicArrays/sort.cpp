#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int>arr(n);

    cout<<"Enter the array Elements: "<<endl;
    for(int i=0; i<arr.size(); i++){ 
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}