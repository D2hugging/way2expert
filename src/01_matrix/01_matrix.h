#ifndef MATRIX_01_H_
#define MATRIX_01_H_

#include <limits.h>

#include <queue>
#include <vector>

namespace foo {

// Given an m x n binary matrix mat, return the distance of the nearest 0 for
// each cell.

// The distance between two adjacent cells is 1.

std::vector<std::vector<int>> UpdateMatrix(std::vector<std::vector<int>>& mat) {
  int m = mat.size();
  int n = mat[0].size();
  std::queue<std::pair<int, int>> q;
  std::vector<std::vector<int>> grid(m, std::vector<int>(n, INT_MAX));
  for (auto i = 0; i < m; ++i) {
    for (auto j = 0; j < n; ++j) {
      if (mat[i][j] == 0) {
        grid[i][j] = 0;
        q.push({i, j});
      }
    }
  }
  std::vector<int> dir{-1, 0, 1, 0, -1};
  while (!q.empty()) {
    auto size = q.size();
    while (size--) {
      auto p = q.front();
      q.pop();
      for (auto i = 0; i < 4; ++i) {
        auto x = p.first + dir[i];
        auto y = p.second + dir[i + 1];
        if (x >= 0 && x < m && y >= 0 && y < n &&
            grid[x][y] > 1 + grid[p.first][p.second]) {
          grid[x][y] = 1 + grid[p.first][p.second];
          q.push({x, y});
        }
      }
    }
  }
  return grid;
}

}  // namespace foo

#endif