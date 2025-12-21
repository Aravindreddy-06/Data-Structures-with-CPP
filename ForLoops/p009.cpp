//Multiplication table using for loops.


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mul;
    for(int i = 1; i<=10; i++){
        mul = n*i;
        cout<<n<<"*"<<i<<" = "<<mul<<endl;
    }
    return 0;
}