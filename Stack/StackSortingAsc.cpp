/*
https://www.geeksforgeeks.org/problems/sort-a-stack/1?page=1&category=CPP,Stack&sortBy=submissions

input: 4 2 6 1 4 
output: 1 2 4 4 6
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

    
    stack<int> temp;
    while(!st.empty()){
        int curr = st.top();
        st.pop();

        while(!temp.empty() && temp.top() > curr){
            st.push(temp.top());
            temp.pop();
        }
        temp.push(curr);
    }
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}

/*
Time complexity for the stack sorting logic O(n^2).
because we cannot do sorting in the stack in the time of O(n), O(1)...

only O(n^2).
*/