/*
Sum of the Array Elements Using Recursion
*/

#include<bits/stdc++.h>
using namespace std;

int array_sum(int arr[], int i){
    if(i<0){
        return 0;                       // 1 time
    }
    return arr[i] + array_sum(arr, i-1); //n times.
}

int main(){
    int n;
    cout<<"Enter the size of the Array: "<<endl;
    cin>>n;

    int arr[n];                             //n size.
    cout<<"Enter the Array Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = array_sum(arr, n-1);          //1 size. //1 time

    cout<<"Sum of the Array: "<<sum<<endl;  // 1 time
    
    return 0;
}

/*
Time Complexity:
    O(n)
Space Complexity: (Recursion Stack)
    O(n)
*/