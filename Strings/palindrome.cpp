//Palindrome string

#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the String: "<<endl;
    cin>>str;
    string RevString = "";
    for(int i=0; i<str.length(); i++){
        RevString = str[i] + RevString;
    }
    if(str == RevString){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome."<<endl;
    }
    return 0;
}