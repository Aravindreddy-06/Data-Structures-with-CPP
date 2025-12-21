#include<iostream>
using namespace std;

int main() {
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    int xdiff,ydiff , maxi;

    xdiff = abs(x1-x2);
    ydiff = abs(y1-y2);

    if(xdiff>ydiff){
        maxi = xdiff;
    }
    else{
        maxi = ydiff;
    }
    cout<<"Maximum:"<<maxi<<endl;
    return 0;
}
