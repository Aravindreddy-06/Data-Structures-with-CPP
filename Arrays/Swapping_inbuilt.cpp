/*

Swap the Elements in an array using inbuitl function.
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
    
    int *minimum_Element = min_element(arr, arr+n);
    int *maximum_Element = max_element(arr, arr+n);

    swap(*minimum_Element, *maximum_Element);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}