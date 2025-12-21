/*
https://www.hackerrank.com/contests/practicecontest1-1/challenges/pangrams
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // code here
    string str;
    cout<<"Enter the String: "<<endl;
    getline(cin, str);
    
    vector<int> freq(26, 0);
    for(int i=0; i<str.size(); i++){
        if(str[i]<=90){
            freq[str[i]-65]++;
        }else{
            freq[str[i]-97]++;
        }
    }

    for(int i=0; i<freq.size(); i++){
        if(freq[i] == 0){
            cout<<"Not a Pangram"<<endl;                
            return 0;
        }
    }
    cout<<"Pangram"<<endl;
    return 0;
}
