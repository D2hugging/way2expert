#ifndef NEXT_GREATER_ELEMENT2_H_
#define NEXT_GREATER_ELEMENT2_H_

#include <stack>
#include <vector>

namespace foo {

// Given a circular integer array nums (i.e., the next element of
// nums[nums.length - 1] is nums[0]), return the next greater number for every
// element in nums.

// The next greater number of a number x is the first greater number to its
// traversing-order next in the array, which means you could search circularly
// to find its next greater number. If it doesn't exist, return -1 for this
// number.

std::vector<int> NextGreaterElement2(std::vector<int>& nums) {
  std::stack<int> st;
  int size = nums.size();
  std::vector<int> ans(size);

  for (auto i = size * 2 - 1; i >= 0; i--) {
    while (!st.empty() && (nums[i % size] >= st.top())) {
      st.pop();
    }
    if (i < size) {
      if (st.empty()) {
        ans[i] = -1;
      } else {
        ans[i] = st.top();
      }
    }

    st.push(nums[i % size]);
  }
  return ans;
}

}  // namespace foo

#endif