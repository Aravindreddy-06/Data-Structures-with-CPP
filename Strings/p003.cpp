//Count the how many vowels in a string.     

#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the String: "<<endl;
    cin>>str;
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    cout<<"Vowel Count is: "<<count<<endl;
    return 0;
}
