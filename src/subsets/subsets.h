#ifndef SUBSETS_H_
#define SUBSETS_H_

#include <vector>
#include <cmath>

namespace problem {

// Given an integer array nums of unique elements, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.

// backtracking
void subsets(const std::vector<int>& nums, int begin, std::vector<int>& sub,
             std::vector<std::vector<int>>& subs) {
  subs.push_back(sub);
  for (auto i = begin; i < nums.size(); ++i) {
    sub.push_back(nums[i]);
    subsets(nums, i + 1, sub, subs);
    sub.pop_back();
  }
  return;
}

std::vector<std::vector<int>> SubsetsBacktracking(
    const std::vector<int>& nums) {
  std::vector<int> sub;
  std::vector<std::vector<int>> subs;
  subsets(nums, 0, sub, subs);
  return subs;
}

// triky
std::vector<std::vector<int>> Subsets(const std::vector<int>& nums) {
  int count = std::pow(2, nums.size());
  std::vector<std::vector<int>> subs;
  for (int i = 0; i < count; ++i) {
    std::vector<int> sub;
    for (int j = 0; j < nums.size(); ++j) {
      if (i & (1 << j)) {
        sub.push_back(nums[j]);
      }
    }
    subs.push_back(sub);
  }
  return subs;
}

}  // namespace problem

#endif