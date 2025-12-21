/*
Print Ur Name for  5 Times using recursion.
*/

#include<iostream>
using namespace std;

int count = 0;
void print_name(){
    if(count == 5){
        return;
    }
    cout<<"Aravind Kumar Reddy"<<endl;
    count++;
    print_name();
}

int main(){
    print_name();
}