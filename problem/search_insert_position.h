#ifndef SEARCH_INSERT_POSITION_H_
#define SEARCH_INSERT_POSITION_H_

#include <vector>

namespace problem {

// Given a sorted array of distinct integers and a target value, return the
// index if the target is found. If not, return the index where it would be if
// it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

int SearchInsert(std::vector<int>& nums, int target) {
  int n = nums.size();
  if (target <= nums[0]) return 0;
  if (target > nums[n - 1]) return n;

  int left = 0;
  int right = n - 1;
  while (left < right) {
    int mid = left + (right - left) / 2;
    if (nums[mid] == target)
      return mid;
    else if (nums[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  // not exist
  if (target > nums[left]) {
    return left + 1;
  }
  return left;
}

}  // namespace problem

#endif