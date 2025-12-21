#include<iostream>
using namespace std;


int main(){
    string str = "Aravind Kumar Reddy";         //Space is also a string.
    cout<<"Single Access: "<<str[5]<<endl;               
    cout<<"Multiple Access: "<<str[0]<<str[8]<<str[14]<<endl;    //Accessing the particular character, using "str[]".
    return 0;
}