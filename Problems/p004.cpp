#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    int count;

    if(num1==num2 && num2==num3){
        cout<<"3"<<endl;
    }
    else if(num1==num2 || num1==num3 || num2==num3){
        cout<<"2"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;

}