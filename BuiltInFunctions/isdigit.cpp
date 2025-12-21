/*
The isdigit() function in C++ is used to determine if a given character represents a decimal digit (0-9).
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch = '5';

    if (isdigit(ch)) {
        cout << "Digit";
    } else {
        cout << "Not a digit";
    }
    return 0;
}

/*
✔ isdigit(ch) returns true if ch is '0' to '9'
✔ No need to compare manually.
*/