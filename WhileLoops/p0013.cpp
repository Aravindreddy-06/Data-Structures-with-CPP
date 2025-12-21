/*
The sequence consists of distinct positive integer numbers and ends with the number 0.
 Determine the value of the second largest element in this sequence. 
 It is guaranteed that the sequence has at least two elements.

*/

#include<iostream>
using namespace std;
int main(){
    int maximum = 0,secondmaximum = 0;
    while(true){
        int n;
        cin>>n;
        if(n == 0){
            break;
        }
        if(n>=maximum){
            secondmaximum = maximum;
            maximum = n;
        }
        if(n>secondmaximum && n<maximum){
            secondmaximum = n;
        }
    }
    cout<<secondmaximum<<endl;

    return 0;
}