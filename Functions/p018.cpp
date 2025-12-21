//Multiplication table in range.
#include<iostream>
using namespace std;

int mul;
int i = 1;


void mulTableinRange(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=10; j++){
            mul = i*j;
            cout<<i<<" x "<<j<<" = "<<mul<<endl;
        }
        cout<<endl;
    }
    
    
}

int main(){

    mulTableinRange(5);

    return 0;
}


