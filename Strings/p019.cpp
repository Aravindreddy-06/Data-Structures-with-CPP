/*
Longest common prefix of two strings.

input: 
s1 = aravind
s2 = aravindreddy

output:
aravind

*/

#include<iostream>
using namespace std;

int main(){

    string str1;
    string str2;
    cin>>str1>>str2;
    string temp = "";
    for(int i=0; i<min(str1.length(), str2.length()); i++){
        if(str1[i] == str2[i]){
            temp = temp + str1[i];
        }else{
            break;
        }
    }
    cout<<temp<<endl;
    return 0;
}