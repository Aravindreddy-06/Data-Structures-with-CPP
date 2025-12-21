//stoi is used to convert the string into integer.
// stoi, stof, stod, stol, stoll, etc....

#include<iostream>
using namespace std;

int main(){
    string str = "25";
    int a = stoi(str);
    int b = stof(str);
    cout<<(a + 21)<<endl;
    cout<<(b + 21.24)<<endl;
}
