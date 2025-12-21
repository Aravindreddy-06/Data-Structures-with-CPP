/*
Reversing Array using stack.

input: 1 2 3 4 5
output: 5 4 3 2 1;
*/

#include<bits/stdc++.h>
using namespace std;

int stackArr[100];
int topElement = -1;

void push(int x){
    if(topElement == 99){
        cout<<"Stack Overflow!"<<endl;
        return;
    }
    topElement++;
    stackArr[topElement] = x;
}

int pop(){
    return stackArr[topElement]--;
}

int main(){

    int n;
    cout<<"Enter the Size of the array."<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the Elements"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        push(arr[i]);
    }
    for(int i=0; i<n; i++){
        arr[i] = pop();
    }

    cout<<"Reversed Array."<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}