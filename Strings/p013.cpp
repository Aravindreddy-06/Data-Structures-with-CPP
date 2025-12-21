#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: " << endl;
    getline(cin, str);
    string tempstring = "";
    string maxStringLength = "";

    for (int i = 0; i < str.length(); i++) {
       if(str[i]!= ' '){
            tempstring += str[i];
       }
       else{
            if(tempstring.length() > maxStringLength.length()){
                maxStringLength = tempstring;
            }
            tempstring = "";
       }
    }
    if(tempstring.length() > maxStringLength.length()){
            maxStringLength = tempstring;
        }
    cout<<maxStringLength<<endl;
    return 0;
}