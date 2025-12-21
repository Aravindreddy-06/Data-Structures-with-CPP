/*
Reverse the string using stack.

input: aravind
outpt: dnivara
*/

#include<bits/stdc++.h>
using namespace std;

int stackArr[100];
int top = -1;

void push(char x){
    if(top == 99){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    stackArr[top] = x;
}

char pop(){
    return stackArr[top--];
}

int main(){
    string s;
    cout<<"Enter the String: "<<endl;
    cin>>s;

    
    for(int i=0; i<s.size(); i++){
        push(s[i]);
    }

    string reversed = "";
    while(top!= -1){
        reversed += pop();
    }

    cout<<"Reversed String: "<<reversed<<endl;
    return 0;
}