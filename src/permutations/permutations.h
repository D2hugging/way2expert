#ifndef PERMUTATIONS_H_
#define PERMUTATIONS_H_

#include <vector>

namespace foo {

// Given an array nums of distinct integers, return all the possible
// permutations. You can return the answer in any order.

void PermuteHelper(std::vector<int>& nums, int index,
                   std::vector<std::vector<int>>& output) {
  if (index == nums.size() - 1) {
    output.push_back(nums);
  }
  for (auto i = index; i < nums.size(); ++i) {
    std::swap(nums[i], nums[index]);
    PermuteHelper(nums, index + 1, output);
    std::swap(nums[i], nums[index]);
  }
}

std::vector<std::vector<int>> Permute(std::vector<int>& nums) {
  std::vector<std::vector<int>> output;
  PermuteHelper(nums, 0, output);
  return output;
}

}  // namespace foo

#endif