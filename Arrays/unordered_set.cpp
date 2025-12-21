/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Input: nums = [1,2,3,1]
Output: true

Input: nums = [1,2,3,4]
Output: false
*/

/*
Explanation:

nums = {2, 2, 1, 1, 1, 2, 2};
🔹Using unordered_set (checking uniqueness):

unordered_set<int> seen;
for (int num : nums) {
    seen.insert(num);
}

Result:
{1, 2}
It just keeps unique elements — no counts, no values

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    }

    unordered_set<int> seen;
    bool hasDuplicate = false;

    for (int num : nums) {
        if (seen.count(num)) {
            hasDuplicate = true;
            break;
        }
        seen.insert(num);
    }

    if (hasDuplicate)
        cout << "Array contains duplicate elements." << endl;
    else
        cout << "Array does not contain duplicates." << endl;

    return 0;
}
