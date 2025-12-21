/*
You are given an array arr of positive integers. Your task is to find all the leaders in the array.
An element is considered a leader if it is greater than or equal to all elements to its right.
The rightmost element is always a leader.

input: [16, 17, 4, 3, 5, 2]
output:  [17, 5, 2]

input: [10, 4, 2, 4, 1]
output: [10, 4, 4, 1]
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n); // n
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];          //n

    vector<int> result;         //1
    int maxx = INT_MIN;         //1

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxx) {           //n
            maxx = arr[i];              //1
            result.push_back(maxx);     //1
        }
    }

    // Reverse to maintain the correct order
    reverse(result.begin(), result.end()); //n/2 -> n times(Ignoring Constant)

    cout << "Leaders in array are: ";   //1
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";           //n
        cout << endl;

    return 0;
}
