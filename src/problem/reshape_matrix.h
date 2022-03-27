#ifndef RESHAPE_MATRIX_H_
#define RESHAPE_MATRIX_H_

#include <vector>

namespace problem {

// In MATLAB, there is a handy function called reshape which can reshape an m x
// n matrix into a new one with a different size r x c keeping its original
// data.

// You are given an m x n matrix mat and two integers r and c representing the
// number of rows and the number of columns of the wanted reshaped matrix.

// The reshaped matrix should be filled with all the elements of the original
// matrix in the same row-traversing order as they were.

// If the reshape operation with given parameters is possible and legal, output
// the new reshaped matrix; Otherwise, output the original matrix.
std::vector<std::vector<int>> MatrixReshape(std::vector<std::vector<int>>& mat,
                                            int r, int c) {
  int m = mat.size();
  int n = mat[0].size();
  int total = m * n;
  if (total != r * c) return mat;

  std::vector<std::vector<int>> ans(r, std::vector<int>(c));
  for (auto i = 0; i < total; i++) {
    ans[i / c][i % c] = mat[i / n][i % n];
  }
  return ans;
}

}  // namespace problem

#endif