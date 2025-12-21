/*
Insertion sort 

input: 4 2 7 1 3 5 6
output: 1 2 3 4 5 6 7

*/

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){ 
    for(int i=1; i<n; i++){               //n times
        for(int j=i; j>0; j--){ 
            if(arr[j] > arr[j+1]){          //n times.
                swap(arr[j], arr[j+1]);     //n times
            }else{
                break;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the Array Size: "<<endl;
    cin>>n;

    int arr[n];                             //n space
    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    insertion_sort(arr, n);            //1 time

    cout<<"Sorted Elements: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
Time Complexity:(Worst Case)
    O(n^2) //If array is not sorted
    O(n) //if array is sorted
Space Complexity:
    O(1)
*/