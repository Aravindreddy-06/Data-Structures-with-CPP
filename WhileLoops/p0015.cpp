// code for the x power y (only for positive integers).

#include<iostream>
using namespace std;
int main(){
    int power = 1;
    int x,y;
    cin>>x>>y;
    while(y--){
        power = power*x;
    }
    cout<<power<<endl;
    return 0;
}
