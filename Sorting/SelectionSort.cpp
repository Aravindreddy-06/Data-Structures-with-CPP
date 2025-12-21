/*
Selection sort 

input: 4 2 7 1 3 5 6
output: 1 2 3 4 5 6 7

take the miniumum element and swap with  0th element, 1st element, 2nd element, .....
*/

#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){ //n times
    for(int i=0; i<n-1; i++){      //Iterate upto n-1, because remaining last element always sorted
        int mini = i;
        for(int j=i; j<n; j++){  //Iterate all elements to find minimum; //n times
            if(arr[j] < arr[mini]) mini = j;
        }
        swap(arr[i], arr[mini]);            // n times
    }
}

int main(){
    int n;
    cout<<"Enter the Array Size: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selection_sort(arr, n);

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
    O(n)
*/