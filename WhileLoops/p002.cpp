/*
Given a sequence of non-negative integers, where each number is written in a separate line. 
Determine the length of the sequence, where the sequence ends when the integer is equal to 0. 
Print the length of the sequence (not counting the integer 0). The numbers following the number 0 should be omitted.
*/

#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int number;
    cin >> number;
    while (number >=0) {
        count++;
        cin >> number;
    }
    cout << count << endl;
    return 0;
}
