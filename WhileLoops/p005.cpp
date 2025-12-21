//A sequence consists of integer numbers and ends with the number 0. 
// Determine the largest element of the sequence

#include <iostream>
using namespace std;

int main() {
    int n;
    int maximum;
    cin >> n;
    maximum = n;
    while (n != 0) {
        cin >> n;
        if(maximum<n){
            maximum = n;
        }
    }
    cout << maximum << endl;
    return 0;
}
