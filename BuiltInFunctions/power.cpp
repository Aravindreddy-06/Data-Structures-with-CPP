/*
C++ program to illustrate the pow() function.
x: The base number.
y: The exponential power.
*/
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int base = 3;
    int exponent = 2;

    int answer = pow(base, exponent);

    cout << answer << endl;
}