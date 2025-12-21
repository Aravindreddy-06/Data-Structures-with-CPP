#include<iostream>
using namespace std;

int abhi(int x, int y){
    int res = x%y;
    return res;
}

int main(){
    int ans = abhi(8,8);
    if(ans > 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}