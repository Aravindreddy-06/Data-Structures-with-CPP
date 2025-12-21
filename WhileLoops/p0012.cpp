/*
A sequence consists of integer numbers and ends with the number 0. 
Determine how many elements of this sequence are greater than their neighbours above.

*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int previous = 0,current = INT_MAX;
    int count = 0;
    while(true){
        previous = current;
        int n;
        cin>>n;
        current = n;
        if(n==0){
            break;
        }
        if(previous<current){
        count++;
        }
    }
    cout<<count<<endl;

    return 0;

}