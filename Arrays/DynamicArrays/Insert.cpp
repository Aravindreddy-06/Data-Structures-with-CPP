#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr(10,5);
    arr.insert(arr.begin()+2 , 10); //Beginning from the array insert the 10 in the position 2.
    arr.insert(arr.begin()+2, {6,7});//inserting multiple elements at the same position.
    
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
