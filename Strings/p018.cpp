/*
Replacing the vowels in a string.

input: aravind
output: iravand.

input: hello
output: holle
*/

#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    string vowelString = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowelString = str[i] + vowelString;
        }
    }
    for(int i=0 ,j=0; i<str.length(); i++){
        if(str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            str[i] = vowelString[j];
            j++;
        }
    }
    cout<<str<<endl;
    return 0;

}