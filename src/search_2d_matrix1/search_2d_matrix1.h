#ifndef SEARCH_2D_MATRIX1_H_
#define SEARCH_2D_MATRIX1_H_

#include <vector>

namespace foo {

// Write an efficient algorithm that searches for a value target in an m x n
// integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the
// previous row.

bool Search(std::vector<int>& arr, int target) {
  int left = 0, right = arr.size() - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (target == arr[mid]) {
      return true;
    } else if (target < arr[mid]) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return false;
}

bool SearchMatrix1(std::vector<std::vector<int>>& matrix, int target) {
  int m = matrix.size();
  int n = matrix[0].size();
  int left = 0, right = m - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (target >= matrix[mid][0] && target <= matrix[mid][n - 1]) {
      return Search(matrix[mid], target);
    } else if (target < matrix[mid][0]) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return false;
}

}  // namespace foo

#endif