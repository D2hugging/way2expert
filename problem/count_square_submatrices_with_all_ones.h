#ifndef _COUNT_SQUARE_SUBMATRICES_WITH_ALL_ONES_H
#define _COUNT_SQUARE_SUBMATRICES_WITH_ALL_ONES_H

#include <vector>

namespace problem {
// Given a m * n matrix of ones and zeros, return how many square submatrices
// have all ones.
// Constraints:
// 1 <= arr.length <= 300
// 1 <= arr[0].length <= 300
// 0 <= arr[i][j] <= 1

class SolutionCountSquares {
 public:
  int countSquares(std::vector<std::vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    std::vector<std::vector<int>> dp(m, std::vector<int>(n, 0));

    for (int i = 0; i < m; ++i) dp[i][0] = matrix[i][0];
    for (int j = 0; j < n; ++j) dp[0][j] = matrix[0][j];

    for (int i = 1; i < m; ++i) {
      for (int j = 1; j < n; ++j) {
        if (matrix[i][j] == 0) {
          dp[i][j] = 0;
        } else {
          dp[i][j] = 1 + std::min(dp[i][j - 1],
                                  std::min(dp[i - 1][j - 1], dp[i - 1][j]));
        }
      }
    }
    int output = 0;
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        output += dp[i][j];
      }
    }
    return output;
  }
};
}  // namespace problem

#endif