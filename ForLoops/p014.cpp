//Gcd and Lcm of two numbers.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    int gcd = 1;

    for(int i=2; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }

    int lcm = (a*b)/gcd;

    cout<<"Gcd: "<<gcd<<endl;
    cout<<"Lcm: "<<lcm<<endl;
    return 0;
}
