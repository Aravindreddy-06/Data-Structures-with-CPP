/*
https://leetcode.com/problems/reverse-prefix-of-word/description/?envType=problem-list-v2&envId=stack

Given a 0-indexed string word and a character ch, reverse the segment of word that starts at index 0 and ends at the index of the first occurrence of ch (inclusive). If the character ch does not exist in word, do nothing.

For example, if word = "abcdefd" and ch = "d", then you should reverse the segment that starts at 0 and ends at 3 (inclusive). The resulting string will be "dcbaefd".
Return the resulting string.


Example 1:

Input: word = "abcdefd", ch = "d"
Output: "dcbaefd"
Explanation: The first occurrence of "d" is at index 3. 
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".
Example 2:

Input: word = "xyxzxe", ch = "z"
Output: "zxyxxe"
Explanation: The first and only occurrence of "z" is at index 3.
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "zxyxxe".
Example 3:

Input: word = "abcd", ch = "z"
Output: "abcd"
Explanation: "z" does not exist in word.
You should not do any reverse operation, the resulting string is "abcd".
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int index = -1;

    string s;
    cout<<"Enter the word: "<<endl;
    cin>>s;

    char ch;
    cout<<"Enter the character: "<<endl;
    cin>>ch;

    for(int i=0; i<s.size(); i++){
        st.push(s[i]);
        if(s[i] == ch){
            index = i;
            break;
        }
    }
    if(index == -1){
        cout<<s<<endl;
        return 0;
    }

    string result = "";
    while(!st.empty()){
        result += st.top();
        st.pop();
    }

    for(int i = index+1; i<s.size(); i++){
        result += s[i];
    }
    cout<<"Result :"<<result<<endl;
    return 0;
}