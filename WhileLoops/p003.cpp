//Determine the sum of all elements in the sequence, ending with the number 0.

#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int sum = 0;
    while(number!=0){ 
        sum += number;
        cin>>number;
    }
    cout<<sum<<endl;
    return 0;
}