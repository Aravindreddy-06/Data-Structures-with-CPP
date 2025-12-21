/*
reverse an Array Using Recursion.
*/

#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int l, int r){
    if(l >= r){
        return;
    }
    
    swap(arr[l], arr[r]);           //n times
    reverse_array(arr, l+1, r-1);   //n times
}

int main(){
    int n;
    cout<<"Enter the Size of the Array: "<<endl;
    cin>>n;
    int arr[n];                         //n size

    cout<<"Enter the Array Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];                    //n size
    }
    reverse_array(arr, 0, n-1);         //1 time.

    cout<<"Reversed Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";              //n times
    }
    cout<<endl;
    return 0;
}

/*
Time Complexity:
    O(n)
Space Complexity:
    O(n) -> Recursion stack used.
*/