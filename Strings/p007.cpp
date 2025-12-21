//Reverse of a string.

#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the String: "<<endl;
    getline(cin, str);
    string stringReverse = "";
    for(int i=0; i<str.length(); i++){
        stringReverse = str[i] + stringReverse;        
    }
    cout<<stringReverse<<endl;
    return 0;
}