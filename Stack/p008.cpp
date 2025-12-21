/*
https://leetcode.com/problems/clear-digits/submissions/1839190374/?envType=problem-list-v2&envId=stack

ou are given a string s.

Your task is to remove all digits by doing this operation repeatedly:

Delete the first digit and the closest non-digit character to its left.
Return the resulting string after removing all digits.

Note that the operation cannot be performed on a digit that does not have any non-digit character to its left.

Example 1:

Input: s = "abc"
Output: "abc"

Explanation:
There is no digit in the string.

Example 2:

Input: s = "cb34"
Output: ""

Explanation:
First, we apply the operation on s[2], and s becomes "c4".
Then we apply the operation on s[1], and s becomes "".
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;

    string s;
    cout<<"Enter the word: "<<endl;
    cin>>s;

    
    for(int i=0; i<s.size(); i++){
        if(!st.empty() && isdigit(s[i])){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }

    string result = "";
    while(!st.empty()){
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());
    cout<<"Result :"<<result<<endl;
    return 0;
}