#ifndef NEXT_GREATER_ELEMENT1_H_
#define NEXT_GREATER_ELEMENT1_H_

#include <stack>
#include <unordered_map>
#include <vector>

namespace problem {

// The next greater element of some element x in an array is the first greater
// element that is to the right of x in the same array.

// You are given two distinct 0-indexed integer arrays nums1 and nums2, where
// nums1 is a subset of nums2.

// For each 0 <= i < nums1.length, find the index j such that nums1[i] ==
// nums2[j] and determine the next greater element of nums2[j] in nums2. If
// there is no next greater element, then the answer for this query is -1.

// Return an array ans of length nums1.length such that ans[i] is the next
// greater element as described above.

std::vector<int> NextGreaterElement1(std::vector<int>& nums1, std::vector<int>& nums2) {
  std::stack<int> st;
  std::unordered_map<int, int> um;
  for (int i = nums2.size() - 1; i >= 0; i--) {
    while (!st.empty() && nums2[i] > st.top()) {
      st.pop();
    }
    if (st.empty()) {
      um[nums2[i]] = -1;
    } else {
      um[nums2[i]] = st.top();
    }
    st.push(nums2[i]);
  }
  std::vector<int> ans;
  for (auto& x : nums1) {
    ans.push_back(um[x]);
  }
  return ans;
}

}  // namespace problem

#endif