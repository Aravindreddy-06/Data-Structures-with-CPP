/*
https://leetcode.com/problems/first-unique-character-in-a-string/?envType=problem-list-v2&envId=hash-table


Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:

Input: s = "leetcode"
Output: 0

Explanation:
The character 'l' at index 0 is the first character that does not occur at any other index.

Example 2:

Input: s = "loveleetcode"
Output: 2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String: "<<endl;
    cin>>s;

    vector<int> freq(26, 0);

    for(char c : s){
        freq[c - 'a']++;
    }
    bool found = false;
    int index = -1;
    for(int i=0; i<s.length(); i++){
        if(freq[s[i] - 'a'] == 1){
            index = i;
            found = true;
            break;
        }
    }
    if(found){
        cout<<index<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}