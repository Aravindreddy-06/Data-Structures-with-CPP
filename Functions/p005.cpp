//with return statement

#include<iostream>
using namespace std;

int sumoftwo(int a, int b){
    int sum = a+b;
    return sum;
}

int main(){
    cout<<sumoftwo(5,6)<<endl;
    
    return 0;
}