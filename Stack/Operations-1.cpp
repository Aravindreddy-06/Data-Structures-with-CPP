#include <bits/stdc++.h>
// #include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl;   // 30

    st.pop();
    cout << "After pop, Top: " << st.top() << endl;  // 20

    cout << "Size: " << st.size() << endl;

    if(st.empty()) {
        cout << "Stack is empty";
    } else {
        cout << "Stack is not empty";
    }

    return 0;
}
