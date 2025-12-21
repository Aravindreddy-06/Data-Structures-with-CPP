//Counting the digits in a number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    for(; n>0;){
        int rem = n%10;
        n = n/10;
        count++;
    }
    cout<<"count is: "<<count<<endl;
    return 0;
}