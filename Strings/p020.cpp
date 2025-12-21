/*
find the index of the first occurence in a string.

input:
haystack = "sadbutsad"
needle = "sad"
output: 0

input:
haystack = "abhireddyreddy"
needle = reddy
output: 4

*/

#include<iostream>
using namespace std;

int main(){
    string haystack;
    string needle;
    cin>>haystack>>needle;
    int index = -1;
    for(int i=0; i<haystack.length(); i++){
        if(haystack.substr(i ,needle.length()) == needle){            
            index = i;
            break;
        }        
    }
    cout<<"The needle occur at the index: "<<index<<endl;
    return 0;
}