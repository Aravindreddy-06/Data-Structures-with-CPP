//Without Return statement for Is eligible to vote ?

#include<iostream>
using namespace std;

void EligibleToVote(int n){
    if(n>=18){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){

    EligibleToVote(17);
    return 0;
}