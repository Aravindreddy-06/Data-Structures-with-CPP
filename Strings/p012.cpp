//Printing the first word in a sentence.

#include<iostream>
using namespace std;

int main(){

    string str;
    getline(cin, str);
    string FirstWord = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]!= ' '){
            FirstWord += str[i];
        }else{
            cout<<FirstWord<<endl;
            break;
        }
    }
}