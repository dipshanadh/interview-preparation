/*
 * Problem: 
 *  Valid Sudoku - https://leetcode.com/problems/valid-sudoku/
 * 
 * Description: 
 *  Determine if a 9 x 9 Sudoku board is valid.
 *  Only the filled cells need to be validated according to the following rules:
 * 
 *    - Each row must contain the digits 1-9 without repetition.
 *    - Each column must contain the digits 1-9 without repetition.
 *    - Each of the nine 3 x 3 sub-boxes of the grid 
 *      must contain the digits 1-9 without repetition.
 * 
 * Example:
 *  • Input: board = 
      [["8","3",".",".","7",".",".",".","."]
      ,["6",".",".","1","9","5",".",".","."]
      ,[".","9","8",".",".",".",".","6","."]
      ,["8",".",".",".","6",".",".",".","3"]
      ,["4",".",".","8",".","3",".",".","1"]
      ,["7",".",".",".","2",".",".",".","6"]
      ,[".","6",".",".",".",".","2","8","."]
      ,[".",".",".","4","1","9",".",".","5"]
      ,[".",".",".",".","8",".",".","7","9"]]
 *  • Output: false
 * 
 * Complexities:
 *  • time: O(n) 
 *  • space: O(n)
*/

#include <bits/stdc++.h>

using namespace std;

// '4' in row 7 is encoded as "7(4)" 
// '4' in col 7 is encoded as "(4)7"
// '4' in top-right square is encoded as "0(4)2"

class Solution {
  public:
    bool isValidSudoku(vector<vector<char>> &board) { 
      unordered_set<string> row(9);
      unordered_set<string> col(9);
      unordered_set<string> box(81);

      for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j) 
          if (board[i][j] != '.') {
            string num = "(" + to_string(board[i][j]) + ")";

            if (
              !row.insert(to_string(i) + num).second ||
              !col.insert(num + to_string(j)).second ||
              !box.insert(to_string(i / 3) + num + to_string(j / 3)).second
            )
              return false;
          }

      return true;
    } 
};