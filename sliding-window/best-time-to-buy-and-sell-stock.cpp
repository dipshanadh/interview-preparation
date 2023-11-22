/*
 * Problem: 
 *  Best Time to Buy and Sell Stock - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * 
 * Description: 
 *  You are given an array prices where 
 *  prices[i] is the price of a given stock on the ith day.
 * 
 *  You want to maximize your profit by choosing a single day 
 *  to buy one stock and choosing a different day in the future to sell that stock.
 * 
 *  Return the maximum profit you can achieve from this transaction. 
 *  If you cannot achieve any profit, return 0.
 * 
 * Example:
 *  • Input: prices = [7,1,5,3,6,4]
 *  • Output: 5 
 * 
 * Complexities:
 *  • time:   O(n)
 *  • space:  O(1)
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int maxProfit (vector<int> &prices) {
      int start = 0, end = 0, maxP = 0;

      while (++end < prices.size())
        if (prices[start] < prices[end]) 
          maxP = max(prices[end] - prices[start], maxP);
        else
          start = end;

      return maxP;
    } 
};