//Check if the number is palindrome or not.


//Reverse Of a number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int originalNum = n;
    int rev = 0;
    int rem = 0;
    while(n>0){
        rem = n%10;
        rev = (rev*10) + rem;
        n = n/10;
    }
    cout<<rev<<endl;

    if(originalNum == rev){
        cout<<"It is a Palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }
    return 0;
}