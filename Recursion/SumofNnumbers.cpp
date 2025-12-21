/*
Sum of the N Natural Numbers.
*/

#include<iostream>
using namespace std;

int sum_of_N(int num){
    //Base Case.
    if(num <= 1){
        return num;
    }
    //Recursive Case.
    return num + sum_of_N(num-1);
}

int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    cout<<sum_of_N(n)<<endl;
    return 0;
}