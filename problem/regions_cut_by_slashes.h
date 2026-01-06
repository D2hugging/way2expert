// An n x n grid is composed of 1 x 1 squares where each 1 x 1 square consists
// of a '/', '\', or blank space ' '. These characters divide the square into
// contiguous regions.

// Given the grid grid represented as a string array, return the number of
// regions.

// Note that backslash characters are escaped, so a '\' is represented as '\\'.

// Example 1:

// Input: grid = [" /","/ "]
// Output: 2
// Example 2:

// Input: grid = [" /","  "]
// Output: 1
// Example 3:

// Input: grid = ["/\\","\\/"]
// Output: 5
// Explanation: Recall that because \ characters are escaped, "\\/" refers to
// \/, and "/\\" refers to /\.

// Constraints:

// n == grid.length == grid[i].length
// 1 <= n <= 30
// grid[i][j] is either '/', '\', or ' '.

// https://leetcode.com/problems/regions-cut-by-slashes/description/

#ifndef REGIONS_CUT_BY_SLASHES_H_
#define REGIONS_CUT_BY_SLASHES_H_

#include <climits>
#include <string>
#include <vector>

namespace problem {

int RegionsBySlashes(std::vector<std::string> &grid) {
  int n = grid.size();
  int N = 3 * n;
  std::vector<std::vector<int>> ngrid(N, std::vector<int>(N, 0));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == '/') {
        ngrid[i * 3 + 0][j * 3 + 2] = 1;
        ngrid[i * 3 + 1][j * 3 + 1] = 1;
        ngrid[i * 3 + 2][j * 3 + 0] = 1;
      } else if (grid[i][j] == '\\') {
        ngrid[i * 3 + 0][j * 3 + 0] = 1;
        ngrid[i * 3 + 1][j * 3 + 1] = 1;
        ngrid[i * 3 + 2][j * 3 + 2] = 1;
      }
    }
  }

  int dx[] = {-1, 0, 1, 0};
  int dy[] = {0, 1, 0, -1};
  auto dfs = [&](auto &&self, int x, int y) -> void {
    ngrid[x][y] = 1;
    for (int k = 0; k < 4; ++k) {
      int nx = x + dx[k];
      int ny = y + dy[k];
      if (nx >= 0 && nx < N && ny >= 0 && ny < N && ngrid[nx][ny] == 0) {
        self(self, nx, ny);
      }
    }
  };

  //
  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (ngrid[i][j] == 0) {
        cnt++;
        dfs(dfs, i, j);
      }
    }
  }

  return cnt;
}

} // namespace problem

#endif