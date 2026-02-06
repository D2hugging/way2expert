// Given an m x n grid of characters board and a string word, return true if
// word exists in the grid.

// The word can be constructed from letters of sequentially adjacent cells,
// where adjacent cells are horizontally or vertically neighboring. The same
// letter cell may not be used more than once.

// Example 1:

// Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word=
// "ABCCED" Output: true

// Example 2:
// Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word
// = "SEE" Output: true

// Example 3:
// Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word
// = "ABCB" Output: false

// Constraints:

// m == board.length
// n = board[i].length
// 1 <= m, n <= 6
// 1 <= word.length <= 15
// board and word consists of only lowercase and uppercase English letters.

// Follow up: Could you use search pruning to make your solution faster with a
// larger board?

// https://leetcode.com/problems/word-search/description/

#ifndef WORD_SEARCH_H_
#define WORD_SEARCH_H_

#include <limits.h>

#include <string>
#include <vector>

namespace problem {
bool exist(std::vector<std::vector<char>>& board, std::string word) {
  int m = board.size();
  int n = board[0].size();

  int dx[4] = {-1, 0, 1, 0};
  int dy[4] = {0, 1, 0, -1};

  auto dfs = [&](auto&& self, int i, int j, int idx) -> bool {
    if (board[i][j] != word[idx]) return false;
    if (idx == word.size() - 1) return true;

    char tmp = board[i][j];
    board[i][j] = '#';
    for (int k = 0; k < 4; ++k) {
      int nx = i + dx[k];
      int ny = j + dy[k];

      if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
        if (self(self, nx, ny, idx + 1)) {
          board[i][j] = tmp;
          return true;
        }
      }
    }
    board[i][j] = tmp;
    return false;
  };

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (dfs(dfs, i, j, 0)) {
        return true;
      }
    }
  }

  return false;
}

}  // namespace problem

#endif