// C++ program to illustrate the swap() function
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4;
    cout << "Before swap: " << endl;
    cout << "a: " << a << " b: " << b;
    cout << endl;

    // using swap
    swap(a, b);

    cout << "After swap: " << endl;
    cout << "a: " << a << " b: " << b;

    return 0;
}