/*
 * Problem: 
 *  Valid Palindrome - https://leetcode.com/problems/valid-palindrome/
 * 
 * Description: 
 *  Given an integer array `nums`, return `true` 
 *  if any value appears at least twice in the array, 
 *  and return `false` if every element is distinct.
 * 
 * Example:
 *  • Input: s = "A man, a plan, a canal: Panama"
 *  • Output: true
 *  • Explanation: "amanaplanacanalpanama" is a palindrome.
 * 
 * Complexities:
 *  • time:   O(n)
 *  • space:  O(1)
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    bool isPalindrome(string s) {
      int i = 0, j = s.size() - 1;

      while (i < j) {
        while (!isalnum(s[i]) && i < j)
          i++;

        while (!isalnum(s[j]) && i < j)
          j--;
        
        if (tolower(s[i++]) != tolower(s[j--]))
          return false;        
      }

      return true;
    }
};