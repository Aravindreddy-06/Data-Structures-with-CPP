/*
practicing stack input and output;
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int n;
    cout<<"Enter the Size of the Stack: "<<endl;
    cin>>n;

    int x;

    cout<<"Enter the Elements in the stack: "<<endl;
    for(int i=0; i<n; i++){
        cin>>x;
        st.push(x);
    }
    cout<<"The elements you entered: "<<endl;
    stack<int> temp = st;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    cout<<"Stack size: "<<st.size()<<endl;
    cout<<"Temp stack size: "<<temp.size()<<endl;
    return 0;
}
