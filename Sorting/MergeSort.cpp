/*
Merge sort Algorithm usisng Recursion.
*/

#include<bits/stdc++.h>
using namespace std;

//This function is to merge.
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;

    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){    //n times
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    //If any elements left in the arrays after done the above loop print here.
    while(left <= mid){                 //n times
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){               //n times
        temp.push_back(arr[right]);
        right++;
    }
    //Copying the temp elements to the original array.
    for(int i=low; i<= high; i++){         // n times
        arr[i] = temp[i - low];
    }
    
}

//This function is to divide the Array.
void mergeSort(vector<int> &arr, int low, int high){
    if(low >= high) return;         //1 time
    int mid = (low + high) /2;      //1 time
    mergeSort(arr, low, mid);       //n, n/2, n/4, n/8, ..... times(O(log2 n))
    mergeSort(arr, mid+1, high);    //n, n/2, n/4, n/8, ..... times(O(log2 n))
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

/*
Time Complexity:
    O(n log n)
Space Complexity:
    O(n) beacuse using extra temp variable.
    O(log n) because recursion stack.

    overall : O(n).
*/