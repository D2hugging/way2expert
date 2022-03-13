#ifndef TOPMOST_AFTER_K_MOVES_H_
#define TOPMOST_AFTER_K_MOVES_H_

#include <set>
#include <vector>

namespace foo {

// You are given an integer array nums and an integer k. Append k unique
// positive integers that do not appear in nums to nums such that the resulting
// total sum is minimum.
// Return the sum of the k integers appended to nums

// Constraints:
// 1 <= nums.length <= 105
// 1 <= nums[i] <= 109
// 1 <= k <= 108
long long MinimalKSum(std::vector<int>& nums, int k) {
  long long ans = static_cast<long long>(long(k) * (long(k + 1))) / 2;
  std::set<int> s(nums.begin(), nums.end());
  for (auto& x : s) {
    if (x <= k) {
      ans += ++k - x;
    } else {
      break;
    }
  }
  return ans;
}

}  // namespace foo

#endif