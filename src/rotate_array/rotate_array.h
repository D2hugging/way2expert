#ifndef ROTATE_ARRAY_H_
#define ROTATE_ARRAY_H_

#include <algorithm>
#include <vector>

namespace foo {

// Given an array, rotate the array to the right by k steps, where k is
// non-negative.

// https://en.wikipedia.org/wiki/Block_swap_algorithms
void Rotate(std::vector<int>& nums, int k) {
  if (k == 0) return;

  k = k % nums.size();
  int left = 0, right = nums.size() - 1 - k;
  while (left < right) {
    std::swap(nums[left], nums[right]);
    left++;
    right--;
  }

  left = nums.size() - k;
  right = nums.size() - 1;
  while (left < right) {
    std::swap(nums[left], nums[right]);
    left++;
    right--;
  }

  left = 0;
  right = nums.size() - 1;
  while (left < right) {
    std::swap(nums[left], nums[right]);
    left++;
    right--;
  }
}

}  // namespace foo

#endif