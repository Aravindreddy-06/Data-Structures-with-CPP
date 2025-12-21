//printing the position of the character in a string.

#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    char searchChar;
    cout<<"Enter the character that which you want to search: "<<endl;
    cin>>searchChar;
    for(int i=0; i<str.length(); i++){
        if(str[i] == searchChar){
            cout<<"Found Position is: "<<i<<endl;
            break;            
        }
    }
    return 0;
}