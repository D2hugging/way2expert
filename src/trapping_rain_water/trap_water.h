#ifndef TRAP_WATER_H_
#define TRAP_WATER_H_

#include <vector>

namespace problem {

// Given n non-negative integers representing an elevation map where the width of each bar is 1, 
// compute how much water it can trap after raining.
int TrapWater(const std::vector<int>& height) {
  int ans = 0;
  int left_max = 0, right_max = 0;
  int left = 0, right = height.size() - 1;
  while (left <= right) {
    if (height[left] < height[right]) {
      if (height[left] > left_max) {
        left_max = height[left];
      } else {
        ans += left_max - height[left];
      }
      left++;
    } else {
      if (height[right] > right_max) {
        right_max = height[right];
      } else {
        ans += right_max - height[right];
      }
      right--;
    }
  }
  return ans;
}

}  // namespace problem

#endif