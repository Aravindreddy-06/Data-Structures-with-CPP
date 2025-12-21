//Finding the substring in the string.

#include<iostream>
using namespace std;

int main(){

    string str = "AravindKumar";
    cout<<"Which string do you want me to search?"<<endl;
    string searchString;
    cin>>searchString;
    int i = 0;
    bool found = false;
    for(int i=0; i<=str.length() - searchString.length(); i++){
        if(str.substr(i, searchString.length()) == searchString){
            found = true;
        }
    }
    if(found){
        cout<<"Found the string"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
    
