/*

A
A B
A B C
A B C D
A B C D E 

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char ch = 65;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            char temp = (ch+j);
            cout<<temp<<" ";
        }
        cout<<endl;
    }
}