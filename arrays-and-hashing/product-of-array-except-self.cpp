/*
 * Problem: 
 *  Product of Array Except Self - https://leetcode.com/problems/product-of-array-except-self/
 * 
 * Description: 
 *  Given an integer array nums, return an array answer 
 *  such that answer[i] is equal to the product of 
 *  all the elements of nums except nums[i].
 *  
 *  The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 * 
 *  You must write an algorithm that runs in O(n) time and without using the division operation.
 * 
 * Example:
 *  • Input: nums = [1,2,3,4] 
 *  • Output: [24,12,8,6]
 * 
 * Complexities:
 *  • time: O(n) 
 *  • space: O(n)
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> productExceptSelf(vector<int> &nums) {
      int size = nums.size();

      vector<int> result(size); 

      int prefix = 1, postfix = 1 ;
    
      for (int i = 0; i < size; ++i) {
        result[i] = nums[i] * prefix;
        prefix = result[i];
      }

      for (int i = size - 1; i > 0; --i) {
        result[i] = result[i - 1] * postfix;
        postfix *= nums[i];
      }

      result[0] = postfix;

      return result;
    }
};