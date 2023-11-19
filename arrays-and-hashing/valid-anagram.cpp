/*
 * Problem: 
 *  Valid Anagram - https://leetcode.com/problems/valid-anagram/
 * 
 * Description: 
 *  Given two strings `s` and `t`, 
 *  return `true` if `t` is an anagram of `s`, and `false` otherwise.
 *  
 *  An Anagram is a word or phrase formed by rearranging 
 *  the smap of a different word or phrase, 
 *  typically using all the original smap exactly once.
 * 
 * Example:
 *  • s = "anagram", t = "nagaram"  => true
 *  • s = "rat", t = "car"  => false
 * 
 * Complexities:
 *  • time:   O(n)
 *  • space:  O(n)
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
      if (s.size() != t.size())
        return false;

      unordered_map<char, int> smap;
      unordered_map<char, int> tmap;

      for (int i = 0; i < s.size(); ++i) {
        smap[s[i]]++;
        tmap[t[i]]++;
      } 

      for (int i = 0; i < s.size(); ++i) 
        if (smap[s[i]] != tmap[s[i]])
          return false;

      return true; 
    }
};