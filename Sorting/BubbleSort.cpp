/*
Selection sort 

input: 4 2 7 1 3 5 6
output: 1 2 3 4 5 6 7

swpa the maximum elements to the last till the array is sorted.
*/

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){ 
    for(int i=n-1; i>0; i--){               //n times
        for(int j=0; j<i; j++){ 
            if(arr[j] > arr[j+1]){          //n times.
                swap(arr[j], arr[j+1]);     //n times
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

    bubble_sort(arr, n);            //1 time

    cout<<"Sorted Elements: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
Time Complexity:
    O(n^2)
Space Complexity:
    O(1)
*/