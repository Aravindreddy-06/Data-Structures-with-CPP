//Factorial of a number.
//With return statement.

#include<iostream>
using namespace std;

int factorial(){
    int n;
    cin>>n;
    int fact = 1;
    int i;
    for( i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int  main(){
    cout<<factorial()<<endl;
    return 0;
}