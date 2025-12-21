//ToString is used to convert the any datatype into string.

#include<iostream>
using namespace std;

int main(){
    int a = 20;
    string b = to_string(a);
    cout<<(b + 'A')<<endl;
}