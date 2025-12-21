#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    int arraysize = sizeof(arr)/sizeof(arr[0]);
    
    arr[0] = 30; //Updating the element in an array.
    for(int i=0; i<arraysize; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}