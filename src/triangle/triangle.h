#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <vector>

namespace problem {

// Given a triangle array, return the minimum path sum from top to bottom.

// For each step, you may move to an adjacent number of the row below. More
// formally, if you are on index i on the current row, you may move to either
// index i or index i + 1 on the next row.
int MinimumTotal(std::vector<std::vector<int>>& triangle) {
  int n = triangle.size();
  std::vector<int> ans(triangle.back());
  for (int row = n - 2; row >= 0; row--) {
    for (int i = 0; i <= row; i++) {
      ans[i] = std::min(ans[i], ans[i + 1]) + triangle[row][i];
    }
  }
  return ans[0];
}

}  // namespace problem

#endif