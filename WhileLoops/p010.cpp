//Given an integer not less than 2. Print its smallest integer divisor greater than 1.

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int divisor = 2;
    while(divisor<=n){
        if(n%divisor == 0){
            cout<<divisor<<endl;
            break;

        }
        divisor++;
    }

    return 0;
}