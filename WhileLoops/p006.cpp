/*
As a future athlete you just started your practice for an upcoming event. Given that on the first day you run x miles, and by the event you must be able to run y miles.
Calculate the number of days required for you to finally reach the required distance for the event, if you increases your distance each day by 10% from the previous day.

Print one integer representing the number of days to reach the required distance.

*/

#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y; // Input initial and target distances

    int days = 1; // Start from day 1
    double current = x;

    while (current < y) {
        current = current * 1.10; // Increase by 10%
        days++; // Move to the next day
    }

    cout << days << endl; // Output the total number of days

    return 0;
}
