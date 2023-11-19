/*
 * Problem: 
 *  Top K Frequent Elements - https://leetcode.com/problems/top-k-frequent-elements/
 * 
 * Description: 
 *  Given an integer array nums and an integer k, 
 *  return the k most frequent elements.
 * 
 *  You may return the answer in any order.
 * 
 * Example:
 *  • nums = [1,1,1,2,2,3], k = 2   => [1,2]
 *  • nums = [1], k = 1   => [1]
 * 
 * Complexities:
 *  • time:   O(n)
 *  • space:  O(n)
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
      int size = nums.size();

      unordered_map<int, int> numMap;

      for (int n : nums) 
        ++numMap[n];

      vector<vector<int>> freqGroups(size + 1);

      for (auto pair : numMap) 
        freqGroups[pair.second].push_back(pair.first);

      vector<int> result;

      for (int i = size; i >= 0; --i)
        for (int num : freqGroups[i])
          if (result.size() < k)
            result.push_back(num);

      return result;
    }
};