/*
Palindrome of a number.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int n_copy = n;
    int rem = 0, rev = 0;

    while(n>0){
        rem = n%10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    if(n_copy == rev){
        cout<<"It is a palindrome."<<endl;
    }else{
        cout<<"Not a plaindrome."<<endl;
    }
    return 0;
}