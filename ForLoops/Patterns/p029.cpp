/*
    A
   B C
  D E F
 G H I J
K L M N O

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char ch = 65;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){            
           cout<<" ";
        }
        for(int k=0; k<i+1; k++){
            cout<<ch++<<" ";
            
        }
        cout<<endl;
    }
}