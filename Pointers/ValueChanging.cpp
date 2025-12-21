/*
Changing value using pointer

Example:
int x = 10;
int* p = &x;

*p = 50;
cout << x;

Now x becomes 50, because the pointer modifies the same memory location.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int *p = &x;
    *p = 50;
    cout<<"Address of x :"<<p<<endl;
    cout<<"value of x: "<<x<<endl;
    return 0;
}