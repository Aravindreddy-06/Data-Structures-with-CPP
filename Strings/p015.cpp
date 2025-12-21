//Finding the index of the substring in the string.

#include<iostream>
using namespace std;

int main(){

    string str = "AravindKumar";
    cout<<"Which string do you want me to search?"<<endl;
    string searchString;
    cin>>searchString;
    bool found = false;
    int index = -1;
    for(int i=0; i<=str.length() - searchString.length(); i++){
        if(str.substr(i , searchString.length()) == searchString){
            found = true;
            index = i;
            break;
        }
    }
    if(found){
        cout<<"The searching string found at "<<index<<endl;
    }else{
        cout<<"Strig Not found."<<endl;
    }
    return 0;
}
    
