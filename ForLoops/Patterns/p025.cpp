/*

AAAAA
BBBBB
CCCCC
DDDDD

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char ch = 65;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){
            char temp = (ch+i);
            cout<<temp<<" ";
        }
        cout<<endl;
    }
}