#ifndef COUNT_NEGATIVE_H_
#define COUNT_NEGATIVE_H_

#include <vector>

namespace problem {

// Given a m x n matrix grid which is sorted in non-increasing order both
// row-wise and column-wise, return the number of negative numbers in grid.
int CountNegatives(std::vector<std::vector<int>>& grid) {
  int m = grid.size();
  int n = grid[0].size();
  int i = m - 1, j = 0;
  int count = 0;
  while (i >= 0 && j >= 0 && j < n) {
    if (grid[i][j] < 0) {
      count += n - j;
      --i;
    } else {
      ++j;
    }
  }
  return count;
}

}  // namespace problem

#endif