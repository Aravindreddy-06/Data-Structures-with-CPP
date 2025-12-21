//Factorial of a number.

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    int i = 1;
    while(i<=n){
        fact = fact * i;
        i++;
    }
    return fact;
}

int main(){
    int result = factorial(5);
    cout<<"Factorial of is: "<<result<<endl;
    
}