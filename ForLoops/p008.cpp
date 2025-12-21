//Find the Missing Number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int firstTotal = ((n*(n+1))/2);
    cout<<"First: "<<firstTotal<<endl;

    int secondTotal = 0;
    for(int i=1; i<n; i++){
        int x;
        cin>>x;
        secondTotal = secondTotal+x;
    }
    cout<<"Second: "<<secondTotal<<endl;
    int result = firstTotal-secondTotal;
    cout<<"Missing Number is: "<<result<<endl;
    return 0;
}