//Print the number of times the searh character appeared in a string.

#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    char searchChar;
    int count = 0;
    cout<<"Enter the character that which you want to search: "<<endl;
    cin>>searchChar;
    for(int i=0; i<str.length(); i++){
        if(str[i] == searchChar){
            count++;            
        }
    }
    cout<<"Appeared "<<count<<" Times."<<endl;
    return 0;
}