/*
 * Problem: 
 *  Contains Duplicate - https://leetcode.com/problems/contains-duplicate/
 * 
 * Description: 
 *  Given an integer array `nums`, return `true` 
 *  if any value appears at least twice in the array, 
 *  and return `false` if every element is distinct.
 * 
 * Example:
 *  • [1,2,3,1] => true
 *  • [1,2,3,4] => false
 * 
 * Complexities:
 *  • time:   O(n)
 *  • space:  O(n)
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    bool containsDuplicate(vector<int> &nums) {
      unordered_set<int> numsSet;

      for (int num : nums) {
        if (numsSet.count(num))
          return true;

        numsSet.insert(num);
      }

      return false;
    }
};
