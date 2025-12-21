//sort the string in ascending and descending order.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "aravind";
    sort(str.begin(), str.end()); // Ascending Order
    cout<<str<<endl;
    sort(str.begin(), str.end(), greater<char>()); //Descending Order
    cout<<str<<endl;
}


