#ifndef LONGEST_HARMONIOUS_SUBSEQUENCE_H_
#define LONGEST_HARMONIOUS_SUBSEQUENCE_H_

#include <unordered_map>
#include <vector>

namespace problem {

// We define a harmonious array as an array where the difference between its
// maximum value and its minimum value is exactly 1.

// Given an integer array nums, return the length of its longest harmonious
// subsequence among all its possible subsequences.

// A subsequence of array is a sequence that can be derived from the array by
// deleting some or no elements without changing the order of the remaining
// elements.

int FindLHS(std::vector<int>& nums) {
  std::unordered_map<int, int> um;
  for (auto& num : nums) {
    um[num]++;
  }
  int maxl = 0;
  for (auto& [num, count] : um) {
    if (um.find(num + 1) != um.end()) {
      maxl = std::max(maxl, um[num + 1] + count);
    }
  }
  return maxl;
}

}  // namespace problem

#endif