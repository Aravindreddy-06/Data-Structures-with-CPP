//For a given integer N, find the greatest integer x where 2x is less than or equal to N. 
// //Print the exponent value and the result of the expression 2x.

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int value = 1,exponent = 1;
    int i = 1;
    while(value*2<=n){
        value = value*2;
        exponent = i;
        i++;
    }
    cout<<exponent<<" "<<value<<endl;
    return 0;
}