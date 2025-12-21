/*
Print the even elements in an array.

input: 1 2 2 3 3 3 4
output: 2 2 4	
*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {4 ,5 ,3 ,4 ,2 ,3};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<arrSize; i++){
        if(arr[i]%2 == 0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}