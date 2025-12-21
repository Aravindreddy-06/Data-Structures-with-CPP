//Printing the index of the found word in the given sentence.

#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    cout<<"Enter the Word you want to search: "<<endl;
    string searchWord;
    cin>>searchWord;
    string word = "";
    int index = -1;
    bool found = false;
    for(int i=0; i<str.length(); i++){
        if(str[i] != ' '){
            word = word + str[i];
        }else{
            if(word == searchWord){ 
                found = true;                
                break;                               
            }
            index = i;
            word = "";
        }
    }
    if(word == searchWord){ 
        found = true;                              
    }
    if(found){
        cout<<"The Word Found at index: "<<index<<endl;
    }else{
        cout<<"Word Not found"<<endl;
    }
    return 0;
}