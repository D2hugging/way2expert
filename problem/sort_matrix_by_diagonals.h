// You are given an n x n square matrix of integers grid. Return the matrix such
// that:

// The diagonals in the bottom-left triangle (including the middle diagonal) are
// sorted in non-increasing order. The diagonals in the top-right triangle are
// sorted in non-decreasing order.

// Example 1:

// Input: grid = [[1,7,3],[9,8,2],[4,5,6]]

// Output: [[8,2,3],[9,6,7],[4,5,1]]

// Explanation:

// The diagonals with a black arrow (bottom-left triangle) should be sorted in
// non-increasing order:

// [1, 8, 6] becomes [8, 6, 1].
// [9, 5] and [4] remain unchanged.
// The diagonals with a blue arrow (top-right triangle) should be sorted in
// non-decreasing order:

// [7, 2] becomes [2, 7].
// [3] remains unchanged.
// Example 2:

// Input: grid = [[0,1],[1,2]]

// Output: [[2,1],[1,0]]

// Explanation:

// The diagonals with a black arrow must be non-increasing, so [0, 2] is changed
// to [2, 0]. The other diagonals are already in the correct order.

// Example 3:

// Input: grid = [[1]]

// Output: [[1]]

// Explanation:

// Diagonals with exactly one element are already in order, so no changes are
// needed.

// Constraints:

// grid.length == grid[i].length == n
// 1 <= n <= 10
// -105 <= grid[i][j] <= 10^5

// https : // leetcode.com/problems/sort-matrix-by-diagonals/description/

#ifndef SORT_MATRIX_BY_DIAGONALS_H_
#define SORT_MATRIX_BY_DIAGONALS_H_

#include <algorithm>
#include <climits>
#include <unordered_map>
#include <vector>

namespace problem {

std::vector<std::vector<int>> SortMatrix(std::vector<std::vector<int>>& grid) {
  std::unordered_map<int, std::vector<int>> di;
  for (int i = 0; i < grid.size(); ++i) {
    for (int j = 0; j < grid[0].size(); ++j) {
      int idx = i - j;
      di[idx].push_back(grid[i][j]);
    }
  }

  // sort
  for (auto& [idx, vals] : di) {
    if (idx >= 0) {
      std::sort(vals.begin(), vals.end());
    } else {
      std::sort(vals.begin(), vals.end(), std::greater<int>());
    }
  }

  // replace
  for (int i = 0; i < grid.size(); ++i) {
    for (int j = 0; j < grid[0].size(); ++j) {
      int idx = i - j;
      grid[i][j] = di[idx].back();
      di[idx].pop_back();
    }
  }
  return grid;
}

}  // namespace problem

#endif