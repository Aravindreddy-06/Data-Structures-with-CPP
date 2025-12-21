/*
https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input sizes
    int n, m;
    cout << "Enter size of array a: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter elements of array a: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of array b: ";
    cin >> m;

    vector<int> b(m);
    cout << "Enter elements of array b: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Find the maximum element to size our frequency array
    int maxx = max(*max_element(a.begin(), a.end()), *max_element(b.begin(), b.end()));

    vector<int> freq(maxx + 1, 0); // frequency array

    // Count frequencies of elements in 'a'
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    // Check elements of 'b'
    bool isSubset = true;
    for (int i = 0; i < m; i++) {
        if (b[i] > maxx || freq[b[i]] == 0) {
            isSubset = false;
            break;
        }
        freq[b[i]]--; // use up one occurrence
    }

    // Output result
    if (isSubset)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
