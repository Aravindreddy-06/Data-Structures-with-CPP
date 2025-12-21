/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 
Example 1:

Input: s = "()"
Output: true

Example 2:

Input: s = "()[]{}"
Output: true

Example 3:

Input: s = "(]"
Output: false
*/

#include<bits/stdc++.h>
using namespace std;

int stackArr[1000];
int top = -1;

void push(char ch){
    top++;
    stackArr[top] = ch;
}

char pop(){
    if(top == -1) return '#';
    return stackArr[top--];
}

int main(){

    string s;
    cout<<"Enter the Paranthesis: "<<endl;
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '[' || s[i] == '{' || s[i] == '('){
            push(s[i]);
        }
        else{
            char topCh = pop();
            if(topCh == '#'){
                cout<<"Invalid"<<endl;
                return 0;
            }
            if(s[i] == ']' && topCh != '['){
                cout<<"Invalid"<<endl;
                return 0;
            }
            if(s[i] == '}' && topCh != '{'){
                cout<<"Invalid"<<endl;
                return 0;
            }
            if(s[i] == ')' && topCh != '('){
                cout<<"Invalid"<<endl;
                return 0;
            }
        }
    }
    if(top == -1){
        cout<<"Valid"<<endl;
    }else{
        cout<<"Invalid"<<endl;
    }
}