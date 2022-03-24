#ifndef HOUSE_ROBBER_H_
#define HOUSE_ROBBER_H_

#include <vector>

namespace foo {

// You are a professional robber planning to rob houses along a street. Each
// house has a certain amount of money stashed, the only constraint stopping you
// from robbing each of them is that adjacent houses have security systems
// connected and it will automatically contact the police if two adjacent houses
// were broken into on the same night.

// Given an integer array nums representing the amount of money of each house,
// return the maximum amount of money you can rob tonight without alerting the
// police.
int HouseRob(std::vector<int>& nums) {
  int size = nums.size();
  if (size == 0) return 0;
  if (size == 1) return nums[0];

  std::vector<int> dp(size);
  dp[0] = nums[0];
  dp[1] = std::max(nums[0], nums[1]);
  for (int i = 2; i < size; i++) {
    dp[i] = std::max(dp[i - 1], dp[i - 2] + nums[i]);
  }

  return dp[size - 1];
}

}  // namespace foo

#endif