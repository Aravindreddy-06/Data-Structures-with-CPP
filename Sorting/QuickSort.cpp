/*
Quick Sort Algorithm using Recursion.
*/

#include<bits/stdc++.h>
using namespace std;

int find_pivot(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i<high){
            i++;
        }
        while(arr[j] > pivot && j>low){
            j--;
        }

        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high){
    if(low < high){
        int pivot = find_pivot(arr, low, high);
        quick_sort(arr, low, pivot-1);
        quick_sort(arr, pivot+1, high);
    }
}

int main(){
    int n;
    cout<<"Enter the Array Size: "<<endl;
    cin>>n;

    vector<int>arr(n);                            //n space
    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quick_sort(arr, 0, n-1);
    cout<<"Sorted Elements: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
⏱ Time Complexity

Best Case	O(n log n)
Average Case	O(n log n)
Worst Case (bad pivot)	O(n²)


💾 Space Complexity
Recursive stack:

Best / Avg → O(log n)
Worst → O(n)
*/