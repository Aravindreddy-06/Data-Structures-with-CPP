/*
Printing the Stack elements as output from top to bottom.
Note: While printing we are not deleting the printed elements from the stack instead we are making a copy 
of the stack and from that we are printing the elements and deleting the elemets from the copy not from the original stack.
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

    stack<int>temp = st; //Making a copy 

    cout << "\nStack elements (top to bottom): ";
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();                     //Deletig the Elements from the temp not from the original stack.
    }

    return 0;
}
