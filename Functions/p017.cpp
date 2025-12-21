//Multiplication table(without return)

#include<iostream>
using namespace std;

int mul;
int n;
int i=1;

void mulTable(){
    cout<<"Enter the number Table you want:"<<endl;
    cin>>n;
    for(; i<=10; i++){
        mul = n*i;
        cout<<n<<" x "<<i<<" = "<<mul<<endl;
    }
}

int main(){
    mulTable();
    return 0;
}