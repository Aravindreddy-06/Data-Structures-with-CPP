//Capitalizing the starting character in a given string.

#include<iostream>
using namespace std;

int main(){

    string str;
    cout<<"Enter the string: "<<endl;
    getline(cin, str);
    for(int i=0; i<str.length(); i++){
        if(i == 0 && str[i]>=97 && str[i]<=122){
            str[i] = str[i] - 32;
            continue;
        }
        if(str[i-1] == ' ' && str[i]>=97 && str[i]<=122){
            str[i] = str[i] - 32;
            continue;
        }
        if(str[i-1] == ' ' && str[i]>=65 && str[i]<=80){
            str[i] = str[i];
            continue;
        }
        if(str[i]>=65 && str[i]<=90){
            str[i] = str[i] + 32;
            continue;
        }
    }
    cout<<str<<endl;
    return 0;

}