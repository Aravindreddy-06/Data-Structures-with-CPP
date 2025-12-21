/*
Check the String is palindrome or not use swapping and two pointers.
*/

#include<bits/stdc++.h>
using namespace std;

bool palindrome_string(string &s , int i, int j){
    int n = s.length();
    if(i >= j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    }
    return palindrome_string(s, i+1, j-1);
}

int main(){

    string s;
    cout<<"Enter the String: "<<endl;
    cin>>s;
    
    if(palindrome_string(s, 0, s.length()-1)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}