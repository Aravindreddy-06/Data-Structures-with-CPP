/*
Find the Factorial of a number using Recursion.
*/

#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}
int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    cout<<factorial(n)<<" "<<endl;
    return 0;
}