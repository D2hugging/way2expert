#ifndef ROTATE_ORANGES_H_
#define ROTATE_ORANGES_H_

#include <queue>
#include <vector>

namespace problem {

// You are given an m x n grid where each cell can have one of three values:

// 0 representing an empty cell,
// 1 representing a fresh orange, or
// 2 representing a rotten orange.
// Every minute, any fresh orange that is 4-directionally adjacent to a rotten
// orange becomes rotten.

// Return the minimum number of minutes that must elapse until no cell has a
// fresh orange. If this is impossible, return -1.
int OrangesRotting(std::vector<std::vector<int>>& grid) {
  int m = grid.size();
  int n = grid[0].size();
  int fresh = 0;

  std::queue<std::pair<int, int>> q;
  for (auto i = 0; i < m; ++i) {
    for (auto j = 0; j < n; ++j) {
      if (grid[i][j] == 2) {
        q.push({i, j});
      } else if (grid[i][j] == 1) {
        fresh++;
      }
    }
  }
  int minute = -1;
  std::vector<int> dir{-1, 0, 1, 0, -1};
  while (!q.empty()) {
    auto size = q.size();
    while (size--) {
      auto p = q.front();
      q.pop();
      // 4-direction
      for (auto i = 0; i < 4; ++i) {
        auto row = p.first + dir[i];
        auto col = p.second + dir[i + 1];
        if (row >= 0 && row < m && col >= 0 && col < n && grid[row][col] == 1) {
          grid[row][col] = 2;
          fresh--;
          q.push({row, col});
        }
      }
    }
    minute++;
  }
  if (fresh > 0) return -1;
  if (minute == -1) return 0;
  return minute;
}

}  // namespace problem

#endif