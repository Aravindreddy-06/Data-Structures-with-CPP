//Converting Binary String to decimal value.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int sum = 0;
    for(int i=0; i<str.length(); i++){
        if(str[str.length() - i - 1] == '1'){
            sum = sum + pow(2 ,i);
        }
    }
    cout<<sum<<endl;    
    return 0;
}