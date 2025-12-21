/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

*/

/*
🔹Using unordered_map (counting occurrences):

unordered_map<int, int> freq;
for (int num : nums) {
    freq[num]++;
}

Result stored internally:

Key : Value
1   : 3
2   : 4


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

    unordered_map<int, int> freq;
    int maxCount = 0;
    int majorityElement = nums[0];

    for (int num : nums) {
        freq[num]++;
        if (freq[num] > maxCount) {
            maxCount = freq[num];
            majorityElement = num;
        }
    }

    cout << "Majority Element is: " << majorityElement << endl;
    return 0;
}
