//Deleting the string from the particular position.

#include <iostream>
#include <string>   
using namespace std;

int main() {
    string str = "Aravind";
    str.erase(3, 3);
    cout<<str<<endl;
    return 0;
}
