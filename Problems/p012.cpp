#include<iostream>
using namespace std;

int main(){

    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int xDiff,yDiff;

    xDiff = abs(x1-x2);
    yDiff = abs(y1-y2);

    if(xDiff == 2 && yDiff == 1){
        cout<<"YES"<<endl;
    }
    else if(xDiff == 1 && yDiff == 2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}