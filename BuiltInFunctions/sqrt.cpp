/*
C++ program to illustrate the sqrt() function
The sqrt() function is used to determine the square root of the value of type double. 
It is defined inside <cmath> header file.
*/
#include <cmath>
#include <iostream>
using namespace std;

int main()
{

    double x = 24;
    double answer;

    answer = sqrt(x);

    cout << answer << endl;

    return 0;
}