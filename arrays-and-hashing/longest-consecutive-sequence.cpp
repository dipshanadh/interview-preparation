/*
 * Problem: 
 *  Longest Consecutive Sequence - https://leetcode.com/problems/longest-consecutive-sequence/
 * 
 * Description: 
 *  Given an unsorted array of integers nums, 
 *  return the length of the longest consecutive elements sequence.
 * 
 * Example:
 *  • Input: nums = [100,4,200,1,3,2]
 *  • Output: 4
 *  • Explanation: The longest consecutive elements sequence is [1, 2, 3, 4].
 * 
 * Complexities:
 *  • time:   O(n)
 *  • space:  O(n)
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int longestConsecutive(vector<int> &nums) {
      unordered_set<int> numSet(nums.begin(), nums.end());

      int maxLength = 0;

      for (int &num : nums)
        if (!numSet.count(num - 1)) {
          int currLength = 1;

          while (numSet.count(++num)) 
            ++currLength;
          
          maxLength = max(currLength, maxLength);
        }

      return maxLength; 
    }
};