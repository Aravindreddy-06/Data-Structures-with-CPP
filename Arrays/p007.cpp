/*
Given a list of numbers. Determine the element in the list with the largest value.
 Print the value of the largest element and then the index number. 
 If the highest element is not unique, print the index of the first instance.

 input: 1 2 3 2 1
 output: value = 3, index = 2
 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the array Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max = 0;
    int index = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }
    cout<<max<<" "<<index<<endl;
    return 0;
}