/*
Find the minimum and maximum element in an array using inbuilt functions.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the Elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int mimimum_Element = *min_element(arr, arr+n);
    int maximum_Element = *max_element(arr, arr+n);

    cout<<"Minimum Element: "<<mimimum_Element<<endl;
    cout<<"Maximum Element: "<<maximum_Element<<endl;
    return 0;
}