/*
reverse the String using recursion.
*/

#include<bits/stdc++.h>
using namespace std;


string reverse_string(string str, int i){
    if(i < 0){
        return "";                          //1 time
    }
    return str[i] + reverse_string(str, i-1); // n times

}

int main(){
    string str;
    cout<<"Enter the String: "<<endl;
    cin>>str;

    cout<<"reversed String: "<<endl;
    cout<<reverse_string(str, str.length() - 1)<<endl; //1 time
    return 0;
}

/*
Time Complexity:
    O(n)
Space Complexity: (Recursion Stack)
    O(n)
*/