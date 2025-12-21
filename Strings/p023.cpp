/*
https://www.geeksforgeeks.org/problems/anagram-1587115620/1?page=1&category=Strings,CPP&sortBy=submissions
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1;
    cout<<"Enter the Sting-1 :"<<endl;
    cin>>str1;

    string str2;
    cout<<"Enter the Sting-2 :"<<endl;
    cin>>str2;

    if(str1.length() != str2.length()){
        cout<<"Not a Pangram"<<endl;
        return 0;
    }

    vector<int> freq(26 , 0);

    for(int i=0; i<str1.length(); i++){
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }
    bool isPangram = true;
    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            isPangram = false;
        }
    }
    if(isPangram){
        cout<<"Pangram"<<endl;
    }else{
        cout<<"Not a Pangram"<<endl;
    }
    return 0;
}