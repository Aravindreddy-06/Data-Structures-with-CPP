//Fibonacci series using do while loop.

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    if(n == 0){
        cout<<0<<endl;
        return 0;
    }
    if(n == 1){
        cout<<1<<endl;
        return 0;
    }
    int  first = 0, second = 1,fibo = 0;
    do{
        fibo = first + second;
        first = second;
        second = fibo;
        n--;

    }while(n>1);

    cout<<fibo<<endl;
    return 0;
}