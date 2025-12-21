//Count the number of words in a string.

#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the String: "<<endl;
    getline(cin, str);
    int wordCount = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            wordCount++;
        }
    }
    cout<<"Word Count is: "<<wordCount+1<<endl;
    return 0;
}