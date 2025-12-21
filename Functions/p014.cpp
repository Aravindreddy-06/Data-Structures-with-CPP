//Square of a number.

#include<iostream>
using namespace std;


int square(){
    int n;
    cout<<"Enter a Number: "<<endl;
    cin>>n;
    return n*n;
}

int main(){
    
    cout<<square()<<endl;
    return 0;
    
}