/*
Valid Palindrome Using Stack

Input: "madam"
Output: true

input: malayalam
output: true
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String: "<<endl;
    cin>>s;

    stack<char> st;
    int top = -1;

    for(char ch : s){
        top++;
        st.push(ch);
    }

    string palindrome = "";
    while(!st.empty()){
        palindrome += st.top();
        st.pop();
    }

    if(s == palindrome){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}