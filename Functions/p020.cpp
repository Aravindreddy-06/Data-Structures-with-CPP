//Swapping the two numbers usi g third variable.


#include<iostream>
using namespace std;

void swapTwo(int a=10, int b=20){
    int temp = a;
    a = b;
    b = temp;
    cout<<"A is:"<<a<<"  B is:"<<b<<endl;
    
}
int main(){
    swapTwo();

    return 0;
}