//The tolower() function is used to convert the given alphabet character to the lowercase.

#include <cctype>
#include <iostream>
using namespace std;

int main()
{

    string str = "GFG";

    // using tolower() for each character
    for (auto& a : str) {
        a = tolower(a);
    }

    cout << str;
    return 0;
}