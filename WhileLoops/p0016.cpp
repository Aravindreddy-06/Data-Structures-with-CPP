//print the digits of the number.

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int unitdigit;
    while(num>0){
        unitdigit = num%10;
        cout<<unitdigit<<endl;
        num = num/10;
    }
    return 0;
}