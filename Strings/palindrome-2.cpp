//2nd Method to find the palindrome string.

#include<iostream>
using namespace std;


string palindrome(string str){
    for(int i=0; i<str.length()/2; i++){
        char temp = str[i];
        str[i] = str[str.length()-i-1];
        str[str.length()-i-1] = temp;
    }
    return str;
}

int main(){
    string str;
    cout<<"Enter the String: "<<endl;
    cin>>str;
    if(str == palindrome(str)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}