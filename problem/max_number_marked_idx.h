// You are given a 0-indexed integer array nums.
// Initially, all of the indices are unmarked. You are allowed to make this
// operation any number of times: Pick two different unmarked indices i and j
// such that 2 * nums[i] <= nums[j], then mark i and j. Return the maximum
// possible number of marked indices in nums using the above operation any
// number of times.

#ifndef MAX_NUMBER_MARKED_IDX_H
#define MAX_NUMBER_MARKED_IDX_H

#include <algorithm>
#include <vector>

namespace problem {

int MaxNumOfMarkedIndices(std::vector<int>& nums) {
  int n = nums.size();
  std::sort(nums.begin(), nums.end());
  int l = 0;
  int r = n / 2;
  while (l < n / 2 && r < n) {
    if (nums[l] * 2 <= nums[r]) {
      l++;
    }
    r++;
  }

  return l * 2;
}

}  // namespace problem
#endif