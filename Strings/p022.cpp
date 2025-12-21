/*
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int length = 0;
    string str;
    getline(cin, str);
    int i = str.length() - 1;

    while(i>=0 && str[i] == ' '){
        i--;
    }
    while(i>=0 && str[i]!= ' '){
        length++;
        i--;
    }
    cout<<"Length of the last word is: "<<length<<endl;
    return 0;
}