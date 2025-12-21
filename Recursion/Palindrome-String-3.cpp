/*
Check the String is palindrome or not use swapping and only 1 pointer.
*/

#include<bits/stdc++.h>
using namespace std;

bool palindrome_string(string &s , int i){
    int n = s.length();
    if(i >= n/2){
        return true;
    }
    if(s[i] != s[n-i-1]){
        return false;
    }
    return (s, i+1);
}

int main(){

    string s;
    cout<<"Enter the String: "<<endl;
    cin>>s;
    palindrome_string(s, 0);

    if(palindrome_string(s, 0)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
    return 0;
}