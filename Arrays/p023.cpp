/*
https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // code here

    int n, m;
    cout << "Enter size of array a: " << endl;
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements of array a: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of array b: " << endl;
    cin >> m;
    vector<int> b(m);
    cout << "Enter elements of array b: " << endl;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // logic to check if b[] is a subset of a[] (considering duplicates)
    vector<bool> used(a.size(), false);
    bool isSubset = true;

    for (int i = 0; i < b.size(); i++) {
        bool found = false;
        for (int j = 0; j < a.size(); j++) {
            if (!used[j] && b[i] == a[j]) {
                used[j] = true;
                found = true;
                break;
            }
        }
        if (!found) {
            isSubset = false;
            break;
        }
    }

    if (isSubset)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
