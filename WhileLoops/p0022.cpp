//Print Factorial(!) of a number.

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i = 1;
    int fact = 1;

    if(num == 0){
        cout<<0<<endl;
        return 0;
    }
    
    while(i<=num){
        fact = fact*i;
        i++;
    }
    cout<<fact<<endl;
    return 0;
}