/*
https://www.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1?page=1&category=CPP,Stack&sortBy=submissions

Given a stack s, delete the middle element of the stack without using any additional data structure.
Middle element:- floor((size_of_stack+1)/2) (1-based indexing) from the bottom of the stack.

Examples:

Input: s = [10, 20, 30, 40, 50]
Output: [50, 40, 20, 10]
Explanation: The bottom-most element will be 10 and the top-most element will be 50. Middle element will be element at index 3 from bottom, which is 30. Deleting 30, stack will look like {10 20 40 50}.

Input: s = [10, 20, 30, 40]
Output: [40, 30, 10]
Explanation: The bottom-most element will be 10 and the top-most element will be 40. Middle element will be element at index 2 from bottom, which is 20. Deleting 20, stack will look like {10 30 40}.
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

    int mid = n/2;
    stack<int> temp;
    for(int i = 0; i<mid; i++){
        temp.push(st.top());
        st.pop();
    }
    st.pop();

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