/*
Given an array arr, count the number of distinct triplets (a, b, c) such that:
a + b = c
Each triplet is counted only once, regardless of the order of a and b.

Examples:

Input: arr[] = [1, 5, 3, 2]
Output: 2 
Explanation: There are 2 triplets: 1 + 2 = 3 and 3 + 2 = 5

Input: arr[] = [2, 3, 4]
Output: 0
Explanation: No such triplet exits

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

  int count = 0;
  int n;

  cout << "Enter the size of the array: " << endl;
  cin >> n;

  vector<int> arr(n);

  cout << "Enter the values of the array: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  for (int k = n - 1; k >= 0; k--) {
    int i = 0, j = k - 1;

    while (i < j) {
      int sum = arr[i] + arr[j];

      if (sum == arr[k]) {
        count++;
        i++;
        j--;
      }
      else if (sum < arr[k]) {
        i++;
      }
      else {
        j--;
      }
    }
  }

  cout << "Count of triplets: " << count << endl;
  return 0;
}
