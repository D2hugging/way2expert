#ifndef TOPMOST_AFTER_K_MOVES_H_
#define TOPMOST_AFTER_K_MOVES_H_

#include <algorithm>
#include <vector>

namespace problem {

// You are given a 0-indexed integer array nums representing the contents of a
// pile, where nums[0] is the topmost element of the pile.

// In one move, you can perform either of the following:

// If the pile is not empty, remove the topmost element of the pile.
// If there are one or more removed elements, add any one of them back onto the
// pile. This element becomes the new topmost element. You are also given an
// integer k, which denotes the total number of moves to be made.

// Return the maximum value of the topmost element of the pile possible after
// exactly k moves. In case it is not possible to obtain a non-empty pile after
// k moves, return -1.

int MaximumTop(std::vector<int>& nums, int k) {
  if (k == 0) return nums[0];

  if (nums.size() == 1) {
    if (k % 2) {
      return -1;
    }
    return nums[0];
  }
  int n = nums.size();
  if (k > n) {
    return *std::max_element(nums.begin(), nums.end());
  }

  // [0...k-2, k-1, k,...]
  int max_left = -1;
  auto i = 0;
  for (; i < k - 1; ++i) {
    max_left = std::max(max_left, nums[i]);
  }
  // i is equal to k here
  if (i + 1 < n && nums[i + 1] > max_left) {
    return nums[i + 1];
  }
  return max_left;
}

}  // namespace problem

#endif