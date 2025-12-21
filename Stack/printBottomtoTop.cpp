/*
Print the stack elements from bottom to top.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    int n, x;

    cout << "Enter the size of the stack: ";
    cin >> n;

    cout << "Enter " << n << " Elements :" << endl;

    for(int i = 0; i < n; i++) {
        cin >> x;     
        st.push(x);  
    }

    vector<int> v;

    stack<int> temp = st;

    while(!temp.empty()){
        v.push_back(temp.top());
        temp.pop();
    }
    reverse(v.begin(), v.end());
    cout<<"Elements from the bottom to top: "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
