//sum of the n numbers.(With return type)

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
    cout<<"Sum is: "<<sum<<endl;
}

string evenorodd(){
    int m;
    cin>>m;
    if(m%2 == 0)
        return "Even";
    else
        return "Odd";
}

string posOrNeg(int k){
    if(k>0)
        return "Positive";
    else if(k<0)
        return "Negative";
    else
        return "0";
}

int main(){
    sumofN();
    cout<<evenorodd()<<endl;
    cout<<posOrNeg(20)<<endl;
    return 0;
}