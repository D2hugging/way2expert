#ifndef SORT_COLORS_H_
#define SORT_COLORS_H_

#include <vector>

namespace problem {

// 0/1/2 sort three color flag
void sortColors(std::vector<int>& nums) {
  int left = 0;
  int right = nums.size() - 1;
  int i = 0;
  while (i <= right) {
    if (nums[i] == 0) {
      std::swap(nums[i], nums[left]);
      left++;
      i++;
    } else if (nums[i] == 2) {
      std::swap(nums[i], nums[right]);
      right--;
    } else {
      i++;
    }
  }
}

}  // namespace problem

#endif