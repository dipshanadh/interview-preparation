/*
 * Problem: 
 *  Two Sum II - Input Array Is Sorted - https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 * 
 * Description: 
 *  Given a 1-indexed array of integers numbers 
 *  that is already sorted in non-decreasing order,
 *  find two numbers such that they add up to a specific target number. 
 *  
 *  Return the indices of the two numbers, index1 and index2, 
 *  added by one as an integer array [index1, index2] of length 2.
 * 
 * Example:
 *  • Input: numbers = [2,7,11,15], target = 9
 *  • Output: [1,2]
 *  • Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
 * 
 * Complexities:
 *  • time:   O(n)
 *  • space:  O(1)
 */

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &numbers, int target) {
      int low = 0, high = numbers.size() - 1;

      while (low < high) {
        int sum = numbers[low] + numbers[high];

        if (sum == target)
          return {low + 1, high + 1};

        sum > target ? high-- : low++;
      }

      return {};
    }
};