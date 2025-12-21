#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Handle base cases
    if(n == 0) {
        cout << 0 << endl;
        return 0;
    }
    if(n == 1) {
        cout << 1 << endl;
        return 0;
    }

    int n1 = 0, n2 = 1, fib = 0;
    int i = 2;  // Start from index 2 because 0 and 1 are already defined

    while(i <= n) {
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
        i++;
    }

    cout << fib << endl;
    return 0;
}
