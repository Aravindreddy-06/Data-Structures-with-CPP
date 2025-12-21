//sum of the n numbers.(Without return type)

#include<iostream>
using namespace std;

void sumofN(){
    int n;
    cin>>n;
    int i = 0;
    int sum = 0;
    while(i<=n){
        sum = sum+i;
        i++;
    }
    cout<<"sum is: "<<sum<<endl;
}


int main(){

    sumofN();
    return 0;
}