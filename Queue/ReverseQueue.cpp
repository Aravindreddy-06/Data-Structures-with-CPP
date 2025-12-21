/*
Reverse the Queue

Input: 1 2 3 4 5
output: 5 4 3 2 1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;

    int n;
    cout<<"Enter How many Elements: "<<endl;
    cin>>n;

    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}