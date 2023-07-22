#ifndef _MAX_SUM_OF_HOURGLASS_H
#define _MAX_SUM_OF_HOURGLASS_H

#include <vector>

namespace problem {

// You are given an m x n integer matrix grid.
// We define an hourglass as a part of the matrix with the following form:
// a b c
// * d *
// e f g
// a + b + c + d + e +f +g
// Return the maximum sum of the elements of an hourglass.
// Note that an hourglass cannot be rotated and must be entirely contained
// within the matrix.
// m == grid.length
// n == grid[i].length
// 3 <= m, n <= 150
// 0 <= grid[i][j] <= 106
int MaxSumOfHourglass(std::vector<std::vector<int>>& grid) {
  int m = grid.size();
  int n = grid[0].size();
  int output = 0;
  for (int i = 0; i < m - 2; ++i) {
    for (int j = 0; j < n - 2; ++j) {
      int hourglass = 0;
      hourglass += grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
      hourglass += grid[i + 1][j + 1];
      hourglass += grid[i + 2][j] + grid[i + 2][j + 1] + grid[i + 2][j + 2];

      output = std::max(output, hourglass);
    }
  }
  return output;
}
}  // namespace problem

#endif