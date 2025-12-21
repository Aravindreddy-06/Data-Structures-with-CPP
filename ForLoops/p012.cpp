//check number is Prime number or not.

#include<iostream>
using namespace std;

int main(){
    bool isprime = true;
    int n;
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            isprime = false;
        }
    }
    if(isprime){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
    return 0;
}