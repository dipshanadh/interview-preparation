/*
 * Problem: 
 *  Group Anagrams - https://leetcode.com/problems/group-anagrams/
 * 
 * Description: 
 *  Given an array of strings strs, group the anagrams together.
 *  You can return the answer in any order.
 *  
 *  An Anagram is a word or phrase formed by 
 *  rearranging the letters of a different word or phrase, 
 *  typically using all the original letters exactly once.
 * 
 * Example:
 *  • Input: strs = ["eat","tea","tan","ate","nat","bat"]
 *  • Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
 * 
 * Complexities:
 *  • time: O(n * k log k) 
 *      where k is the max length of any string
 *  • space: O(n)
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
      unordered_map<string, vector<string>> agramsMap;

      for (string &str : strs) {
        string orginalStr = str;

        sort(str.begin(), str.end());

        agramsMap[str].push_back(orginalStr);
      }
      
      vector<vector<string>> result;

      for (auto &agramGroup : agramsMap) 
        result.push_back(agramGroup.second);

      return result;
    }
};