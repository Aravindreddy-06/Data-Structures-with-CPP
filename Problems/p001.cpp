#include<iostream>
using namespace std;

int main(){

    int a,b;
    int minimum;
    cin>>a>>b;

    if(a<b){
        minimum=a;
    }
    else{
        minimum=b;
    }
    cout<<"Minimum is:"<<minimum<<endl;
    return 0;

}