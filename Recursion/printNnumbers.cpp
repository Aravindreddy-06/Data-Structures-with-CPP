/*
Print the Numbers upto N.
*/

#include<iostream>
using namespace std;
void print_n_numbers(int num, int i){
    if(i>num){  //In decreasing order change the condition to i<1.
        return;
    }
    cout<<i<<" "<<endl;
    print_n_numbers(num, i+1); //In decreasing order change the i+1 to i-1.
}

int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    print_n_numbers(n, 1); //Start i from 1 //In decreasing order change the condition to (n,1) to (n,n)means start i from n.
    return 0;
}