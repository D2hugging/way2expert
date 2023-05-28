#ifndef _MATRIX_SPIRAL_H
#define _MATRIX_SPIRAL_H

#include <vector>

std::vector<int> SpiralOrder(std::vector<std::vector<int>>& matrix) {
  std::vector<int> output;
  // base case
  if (matrix.size() == 0) {
    return output;
  }

  int top = 0, bottom = matrix.size() - 1;
  int left = 0, right = matrix[0].size() - 1;

  while (1) {
    if (left > right) {
      break;
    }
    // print top row
    for (int i = left; i <= right; i++) {
      output.push_back(matrix[top][i]);
    }
    top++;

    if (top > bottom) {
      break;
    }
    // print right column
    for (int i = top; i <= bottom; i++) {
      output.push_back(matrix[i][right]);
    }
    right--;

    if (left > right) {
      break;
    }
    // print bottom row
    for (int i = right; i >= left; i--) {
      output.push_back(matrix[bottom][i]);
    }
    bottom--;

    if (top > bottom) {
      break;
    }
    // print left column
    for (int i = bottom; i >= top; i--) {
      output.push_back(matrix[i][left]);
    }
    left++;
  }
  return output;
}

#endif