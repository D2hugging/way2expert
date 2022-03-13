#ifndef MAXIMUM_SUBARRAY_H_
#define MAXIMUM_SUBARRAY_H_

#include <vector>
#include <limits.h>

namespace foo {

// Given an integer array nums, find the contiguous subarray (containing at
// least one number) which has the largest sum and return its sum.

// A subarray is a contiguous part of an array.

int MaxSubArray(std::vector<int>& nums) {
  int max_here = 0;
  int max_so_far = INT_MIN;
  for (auto i = 0; i < nums.size(); ++i) {
    max_here += nums[i];
    if (max_here > max_so_far) {
      max_so_far = max_here;
    }
    if (max_here < 0) max_here = 0;
  }
  return max_so_far;
}

}  // namespace foo

#endif