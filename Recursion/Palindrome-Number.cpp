/*
Check if a number is palindrome or not.
*/

#include<bits/stdc++.h>
using namespace std;

int palindrome(int n, int rev){
    if(n == 0){
        return rev;
    }
    return palindrome(n/10, rev * 10 + (n%10));
}

int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;

    int n_copy = n;
    int rev = palindrome(n, 0);
    if(rev == n_copy){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"not Palindrome"<<endl;
    }
    return 0;
}