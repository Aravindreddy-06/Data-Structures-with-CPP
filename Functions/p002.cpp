//Prime Numbers in Range.

#include<iostream>
using namespace std;

void primeinRange(int n){
    for(int j=2; j<=n; j++){
        bool isprime = true;

        for(int i=2; i<j; i++){
            if(j%i == 0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            cout<<j<<" ";
        }
    }
}

int main(){
    primeinRange(30);
    cout<<endl;
    primeinRange(100);
    return 0;
}