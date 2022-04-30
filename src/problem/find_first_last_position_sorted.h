#ifndef FIND_MINIMUM_ROTATED_SORTED_H_
#define FIND_MINIMUM_ROTATED_SORTED_H_

#include <vector>

namespace problem {
// Given an array of integers nums sorted in non-decreasing order, find the
// starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

std::vector<int> SearchRange(std::vector<int>& nums, int target) {
  int left = 0, right = nums.size() - 1;
  std::vector<int> ans(2, -1);
  while (left <= right) {
    auto mid = left + (right - left) / 2;
    if (nums[mid] == target) {
      if (mid == left || nums[mid] != nums[mid - 1]) {
        ans[0] = mid;
        break;
      } else {
        right = mid - 1;
      }
    } else if (nums[mid] > target) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }

  left = 0, right = nums.size() - 1;
  while (left <= right) {
    auto mid = left + (right - left) / 2;
    if (nums[mid] == target) {
      if (mid == right || nums[mid] != nums[mid + 1]) {
        ans[1] = mid;
        break;
      } else {
        left = mid + 1;
      }
    } else if (nums[mid] > target) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return ans;
}

}  // namespace problem

#endif