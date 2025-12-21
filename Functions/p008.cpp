//Positive or negative 
//Without Return statement.


#include<iostream>
using namespace std;

void PosOrNeg(){
    int n;
    cin>>n;
    if(n>0){
        cout<<"Positive"<<endl;
    }
    else if(n<0){
        cout<<"Negative"<<endl;
    }
    else{
        cout<<"It is 0"<<endl;
    }
}

int main(){

    PosOrNeg();
    return 0;
}