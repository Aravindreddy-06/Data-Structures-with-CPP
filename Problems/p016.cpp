#include<iostream>
using namespace std;

int main() {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        
        int alice = a1 + a2 + a3, bob = b1 + b2 + b3, AS, BS;

        if (a1 <= a2 && a1 <= a3) {
            AS = a1;
        }
        else if (a2 <= a1 && a2 <= a3) {
            AS = a2;
        }
        else {
            AS = a3;
        }

        if (b1 <= b2 && b1 <= b3) {
            BS = b1;
        }
        else if (b2 <= b1 && b2 <= b3) {
            BS = b2;
        }
        else {
            BS = b3;
        }

        bob -= BS;
        alice -= AS;

        if (alice > bob) {
            cout << "Alice" << endl;
        }
        else if (bob > alice) {
            cout << "Bob" << endl;
        }
        else {
            cout << "Tie" << endl;
        }
    return 0;
}
