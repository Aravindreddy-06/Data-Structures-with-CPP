//With Return Statement is prime or not.

#include<iostream>
using namespace std;

bool primeOrNot(int n){
    bool isprime = true;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            isprime = false;
            break;
        }
    }
    return isprime;
}

int main(){
    
    int num = 9;
    bool x = primeOrNot(num);

    if(x){
        cout<<num<<" is a prime number."<<endl;
    }
    else{
        cout<<num<<" is not a prime number."<<endl;
    }
    return 0;
}
