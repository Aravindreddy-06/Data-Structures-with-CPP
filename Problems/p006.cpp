#include<iostream>
using namespace std;

int main(){

    int x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;

    if(((x1+x2)%2) == ((y1+y2)%2)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}