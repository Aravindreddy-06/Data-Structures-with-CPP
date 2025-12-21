#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int min;

    if(a<b && a<c){
        min = a;
    }
    else if(b<a && b<c){
        min = b;
    }
    else{
        min = c;
    }
    cout<<"minimum is:"<<min<<endl;
    return 0;

}