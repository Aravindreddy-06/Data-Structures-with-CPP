/*
Taking input from the user
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    int n, x;

    cout << "Enter how many numbers you want to insert: ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;

    for(int i = 0; i < n; i++) {
        cin >> x;     // take user input
        st.push(x);   // push into stack
    }

    cout << "\nStack elements (top to bottom): ";
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
