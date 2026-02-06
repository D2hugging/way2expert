// You are given an m x n matrix board containing letters 'X' and 'O', capture regions that are surrounded:

// Connect: A cell is connected to adjacent cells horizontally or vertically.
// Region: To form a region connect every 'O' cell.
// Surround: The region is surrounded with 'X' cells if you can connect the region with 'X' cells and none of the region
// cells are on the edge of the board. To capture a surrounded region, replace all 'O's with 'X's in-place within the
// original board. You do not need to return anything.

// Example 1:

// Input: board = [["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]

// Output: [["X","X","X","X"],["X","X","X","X"],["X","X","X","X"],["X","O","X","X"]]

// Explanation:

// In the above diagram, the bottom region is not captured because it is on the edge of the board and cannot be
// surrounded.

// Example 2:

// Input: board = [["X"]]

// Output: [["X"]]

// Constraints:

// m == board.length
// n == board[i].length
// 1 <= m, n <= 200
// board[i][j] is 'X' or 'O'.

#ifndef SURROUNDED_REGIONS_H_
#define SURROUNDED_REGIONS_H_

#include <vector>

namespace problem {
void SurroundedRegions(std::vector<std::vector<char>>& board) {
  int dx[4] = {-1, 0, 1, 0};
  int dy[4] = {0, 1, 0, -1};
  int m = board.size();
  int n = board[0].size();
  auto dfs = [&](auto&& self, int i, int j) {
    if (board[i][j] == 'X' || board[i][j] == '1') {
      return;
    }

    board[i][j] = '1';
    for (int k = 0; k < 4; ++k) {
      int nx = i + dx[k];
      int ny = j + dy[k];
      if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
        self(self, nx, ny);
      }
    }
  };

  for (int i = 0; i < m; ++i) {
    dfs(dfs, i, 0);
    dfs(dfs, i, n - 1);
  }
  for (int j = 0; j < n; ++j) {
    dfs(dfs, 0, j);
    dfs(dfs, m - 1, j);
  }
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (board[i][j] == 'O') {
        board[i][j] = 'X';
      } else if (board[i][j] == '1') {
        board[i][j] = 'O';
      }
    }
  }
}

}  // namespace problem

#endif