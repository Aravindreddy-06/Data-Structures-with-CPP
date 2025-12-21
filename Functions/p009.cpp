//Positive or negative 
//With Return statement.


#include<iostream>
using namespace std;

string PosOrNeg(){
    int n;
    cin>>n;
    if(n>0)

    return "Positive";    
    else if(n<0)
    return "Negative";
    else
    return "It is 0";
    
}

int main(){

    cout<<PosOrNeg()<<endl;
    return 0;
}