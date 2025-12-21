/*
Find the Maximum Element in an array using recursion.
*/

#include<bits/stdc++.h>
using namespace std;

int max_element(int arr[], int i){
    if(i == 0){
        return arr[0];              //1 time
    }
   
    return max(arr[i], max_element(arr, i-1));  //n times.
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    int arr[n];                                 // n space
    cout<<"Enter the Array Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxx_ele = max_element(arr, n-1);       //1 time
    cout<<"Maximum Element: "<<maxx_ele<<endl;  //1 time
    return 0;
}

/*
Time Complexity:
    O(n)
Space Complexity: (Recursion Stack)
    O(n)
*/