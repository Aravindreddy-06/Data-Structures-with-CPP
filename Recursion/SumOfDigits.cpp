/*
Sum of the Digits using Recursion.
input: 12345
output: 15
*/

#include<iostream>
using namespace std;

int sum_of_digits(int num){
    if(num == 0){
        return 0;
    }
    return (num%10 + sum_of_digits(num/10));
}

int main(){
    int n;
    cout<<"Enter the Digits: "<<endl;
    cin>>n;
    cout<<sum_of_digits(n)<<endl;
}
