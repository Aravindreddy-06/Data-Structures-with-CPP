// C++ program to illustrate the binary_search() function
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = { 10, 11, 12, 13, 14 };

    // checking if the value 16 is present or not
    if (binary_search(arr.begin(), arr.end(), 16)) {
        cout << 16 << " is present.";
    }
    else {
        cout << 16 << " is not present";
    }

    cout << endl;
}