/*
 * Problem: 
 *  Two Sum - https://leetcode.com/problems/two-sum/
 * 
 * Description: 
 *  Given an array of integers nums and an integer target, 
 *  return indices of the two numbers such that they add up to target.
 *  
 *  You may assume that each input would have exactly one solution, 
 *  and you may not use the same element twice.
 * 
 *  You can return the answer in any order.
 * 
 * Example:
 *  • nums = [2,7,11,15], target = 9  => [0,1]
 *  • nums = [3,2,4], target = 6  => [1,2]
 * 
 * Complexities:
 *  • time:   O(n)
 *  • space:  O(n)
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
      unordered_map<int, int> numsMap;

      for (int i = 0; i < nums.size(); ++i) {
        int req = target - nums[i];

        if (numsMap.count(req))
          return {i, numsMap[req]};

        numsMap.insert({nums[i], i});
      }

      return {};
    }
};