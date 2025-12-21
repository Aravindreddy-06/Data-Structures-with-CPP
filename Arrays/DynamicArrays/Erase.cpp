#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr(10,5);
    arr.erase(arr.begin()+2); //Beginning from the array delete the value in the position 2.

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
