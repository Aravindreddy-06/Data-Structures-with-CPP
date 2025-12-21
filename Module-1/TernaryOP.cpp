#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    
    string iseligibletovote;
    iseligibletovote = (age>=18)? "Yes! Person is Eligible to vote" : "Not Eligible to vote";
    cout<<iseligibletovote<<endl;
    return 0;
}

