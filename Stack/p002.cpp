/*
Sum of Stack Elements.
input: 1 2 3 4 5 
output: 15
*/
#include<bits/stdc++.h>
using namespace std;

int stackArr[100];
int top = -1;

void push(int x){
    if(top == 99){
        cout<<" Stack Overflow!"<<endl;
        return;
    }
    top++;
    stackArr[top] = x;
}

int main(){
    int n,x;
    cout<<"Enter the size of the stack array:"<<endl;
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the Elements into the stack array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        push(arr[i]);
    }

    int sum = 0;
    for(int i = 0; i<arr.size(); i++){
        sum += arr[i];
    }
    cout<<"sum is: "<<sum<<endl;
}