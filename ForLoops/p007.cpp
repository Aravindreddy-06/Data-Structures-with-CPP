#include<iostream>
using namespace std;

int main(){
    int fact = 1,sum = 0, i = 1;
    int n;
    cin>>n;
    for(i = 1; i<=n; i++){
        fact = fact*i;
        sum = sum + fact;
    }
    cout<<sum<<endl;
    return 0;
}