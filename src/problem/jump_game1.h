#ifndef JUMP_GAME1_H_
#define JUMP_GAME1_H_

#include <vector>

namespace problem {

// You are given an integer array nums. You are initially positioned at the
// array's first index, and each element in the array represents your maximum
// jump length at that position.

// Return true if you can reach the last index, or false otherwise.

bool CanJump(std::vector<int>& nums) {
  int jump = 0;
  for (int i = nums.size() - 2; i >= 0; --i) {
    ++jump;
    if (nums[i] >= jump) {
      jump = 0;
    }
  }
  return jump == 0 ? true : false;
}

}  // namespace problem

#endif