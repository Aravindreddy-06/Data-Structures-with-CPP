/*
Given two integers A and B. 
Print all numbers from A to B inclusively, in ascending order, if A < B, or in descending order, if A ≥ B.
*/

#include<iostream>
using namespace std;
int main(){

    int a,b;;
    cin>>a>>b;
    int i;
    if(a<b){
        for(i = a; i<=b; i++){
            cout<<i<<endl;
        }
    }else{
        for(i = a; i>=b; i--){
            cout<<i<<endl;
        }
    }
    return 0;
}