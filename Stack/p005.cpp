/*
Given a string s, remove all adjacent duplicate characters from the string.
You must repeatedly remove pairs of adjacent, equal characters until no such pairs remain.
Return the final resulting string.

Example 1

Input:
s = "abbaca"
Output:
"ca"

Explanation:

The pair "bb" in "abbaca" is removed → "aaca"
Now the pair "aa" is removed → "ca"
No more adjacent duplicates remain.
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
        if(!st.empty() && st.top() == ch){            
            st.pop();
        }else {
            st.push(ch);
        }
    }
    string result = "";
    while(!st.empty()){
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());
    
    cout<<"result: "<<result<<endl;
    return 0;
}