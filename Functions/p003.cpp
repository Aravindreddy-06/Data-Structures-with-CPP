#include<iostream>
using namespace std;

int abhi(){
    int n;
    cin>>n;
    int sum = 0;
    while(n>0){
        int i = n%10;
        sum = sum + i;
        n = n/10;
    }
    return sum;   
}

int main(){
    
    cout<<abhi()<<endl;    
    return 0;
}