//Check if number is prime or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime = true;
    int i = 2;
    while(i<n){
        if(n%i == 0){
            isprime = false;
            break;
        }
        i++;
    }
    if(isprime){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Pime"<<endl;
    }
    return 0;
}