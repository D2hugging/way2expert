#ifndef REMOVE_MAKE_STRICTLY_INC_H_
#define REMOVE_MAKE_STRICTLY_INC_H_

#include <vector>

namespace foo {

// Given a 0-indexed integer array nums, return true if it can be made strictly
// increasing after removing exactly one element, or false otherwise. If the
// array is already strictly increasing, return true.

// The array nums is strictly increasing if nums[i - 1] < nums[i] for each index
// (1 <= i < nums.length).

bool CanBeIncreasing(std::vector<int>& nums) {
  int cnt = 0;
  for (int i = 1; i < nums.size(); ++i) {
    if (nums[i] <= nums[i - 1]) {
      if (cnt == 1) return false;
      ++cnt;
      if (i >= 2 && nums[i] <= nums[i - 2]) {
        nums[i] = nums[i - 1];
      }
    }
  }
  return cnt <= 1;
}

}  // namespace foo

#endif