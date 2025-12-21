//Declaring the pointer.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int *p = &x;
    cout<<"Address of x :"<<p<<endl;
    cout<<"value of x: "<<*p<<endl;
    return 0;
}