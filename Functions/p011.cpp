//Greatest of Two 
// With return statement.

#include<iostream>
using namespace std;

int greatest(int  a, int b){
    if(a>b)
    return a;
    else
    return b;
}

int main(){
    int x = 10, y = 15;
    cout<<"Greatest is: "<<greatest(x,y)<<endl;
    return 0;
}