// The toupper() function is used to convert the given alphabet character to uppercase. 

#include <cctype>
#include <iostream>
using namespace std;

int main()
{

    string str = "geeksforgeeks";

    // using toupper() for each character
    for (auto& a : str) {
        a = toupper(a);
    }

    cout << str;
    return 0;
}