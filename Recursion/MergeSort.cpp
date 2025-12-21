/*
Do the Merge sort using Recursion.
*/

#include<bits/stdc++.h>
using namespace std;

//This function is to merge.
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;

    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    //If any elements left in the arrays after done the above loop print here.
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    //Copying the temp elements to the original array.
    for(int i=low; i<= high; i++){
        arr[i] = temp[i - low];
    }
    
}

//This function is to divide the Array.
void mergeSort(vector<int> &arr, int low, int high){
    if(low >= high) return;
    int mid = (low + high) /2;
    mergeSort(arr, low, mid);       
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    int n;
    cout<<"Enter the Size of the Array: "<<endl;
    cin>>n;
    vector<int> arr(n);;

    cout<<"Enter the Array Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mergeSort(arr, 0, n-1); //low starts from 0, high starts from last.(n-1).

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;   
}