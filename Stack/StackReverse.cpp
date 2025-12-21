/*
https://www.geeksforgeeks.org/problems/reverse-a-stack/1?page=2&category=CPP,Stack&sortBy=submissions

input: 3 2 4 5 6
output: 6 5 4 2 3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int n,x;
    cout<<"How many Elements you want to push?"<<endl;
    cin>>n;

    cout<<"Enter the Elements you want to push: "<<endl;
    for(int i=0; i<n; i++){
        cin>>x;
        st.push(x);
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}