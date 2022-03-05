#ifndef MOST_FREQ_NUM_FOLLOWING_KEY_
#define MOST_FREQ_NUM_FOLLOWING_KEY_

#include <vector>

namespace foo {

// You are given a 0-indexed integer array nums. You are also given an integer
// key, which is present in nums. For every unique integer target in nums, count
// the number of times target immediately follows an occurrence of key in nums.
// In other words, count the number of indices i such that:

// 0 <= i <= n - 2,
// nums[i] == key and,
// nums[i + 1] == target.
// Return the target with the maximum count. The test cases will be generated
// such that the target with maximum count is unique.

int MostFrequentFollowingKey(std::vector<int>& nums, int key) {
  int count = 0;
  int target = 0;
  int max_count = -1;
  int max_target = 0;
  for (size_t i = 0; i < nums.size() - 1; ++i) {
    if (key == nums[i]) {
      target = nums[i + 1];
      count = 1;
      for (auto j = i + 2; j < nums.size(); ++j) {
        if (nums[j] == target) {
          count++;
        }
      }
      if (count > max_count) {
        max_count = count;
        max_target = target;
      }
    }
  }
  return max_target;
}

}  // namespace foo

#endif