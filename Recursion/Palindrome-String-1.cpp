/*
Check the String is palindrome or not.
*/

#include<bits/stdc++.h>
using namespace std;

string palindrome_string(string s , int i){
    if(i < 0){
        return "";
    }
    return s[i] + palindrome_string(s, i-1);
}

int main(){

    string s;
    cout<<"Enter the String: "<<endl;
    cin>>s;
    string s_copy = s;
    string pal = palindrome_string(s, s.length()-1);

    if(pal == s_copy){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}