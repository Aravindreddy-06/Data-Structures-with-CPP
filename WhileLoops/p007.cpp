//Determine the number of even elements in the sequence ending with the number 0.

#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin>>n;
    while(n!=0){
        if(n%2==0){
            count++;
        }
        cin>>n;
    }
    cout<<"count = "<<count<<endl;
}