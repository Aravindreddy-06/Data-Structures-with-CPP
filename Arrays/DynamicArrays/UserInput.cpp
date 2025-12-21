#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int>arr(n);

    cout<<"Enter the array Elements: "<<endl;
    for(int i=0; i<arr.size(); i++){ //Here we are using arr.size() not 'n' because it is vector array it might change its size later. 
        cin>>arr[i];
    }

    arr.insert(arr.begin()+2, {6,7}); //inserting multiple elements at the same position.

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
