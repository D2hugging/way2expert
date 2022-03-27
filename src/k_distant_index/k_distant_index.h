#ifndef K_DISTANT_INDEX_H_
#define K_DISTANT_INDEX_H_

#include <vector>

namespace problem {

// You are given a 0-indexed integer array nums and two integers key and k. A
// k-distant index is an index i of nums for which there exists at least one
// index j such that |i - j| <= k and nums[j] == key.
// Return a list of all k-distant indices sorted in increasing order.

// 1 <= nums.length <= 1000
// 1 <= nums[i] <= 1000
// key is an integer from the array nums.
// 1 <= k <= nums.length

// Input: nums = [3,4,9,1,3,9,5], key = 9, k = 1
// Output: [1,2,3,4,5,6]
// Explanation: Here, nums[2] == key and nums[5] == key.
// - For index 0, |0 - 2| > k and |0 - 5| > k, so there is no j where |0 - j| <=
// k and nums[j] == key. Thus, 0 is not a k-distant index.
// - For index 1, |1 - 2| <= k and nums[2] == key, so 1 is a k-distant index.
// - For index 2, |2 - 2| <= k and nums[2] == key, so 2 is a k-distant index.
// - For index 3, |3 - 2| <= k and nums[2] == key, so 3 is a k-distant index.
// - For index 4, |4 - 5| <= k and nums[5] == key, so 4 is a k-distant index.
// - For index 5, |5 - 5| <= k and nums[5] == key, so 5 is a k-distant index.
// - For index 6, |6 - 5| <= k and nums[5] == key, so 6 is a k-distant index.
// Thus, we return [1,2,3,4,5,6] which is sorted in increasing order.

std::vector<int> FindKDistantIndices(std::vector<int>& nums, int key, int k) {
  if (nums.empty()) return {};

  std::vector<int> js;
  for (auto i = 0; i < nums.size(); ++i) {
    if (nums[i] == key) js.push_back(i);
  }
  if (js.empty()) return {};
  if (js.size() == nums.size()) return js;

  std::vector<int> ans;
  for (auto i = 0; i < nums.size(); ++i) {
    for (auto j : js) {
      if (abs(i - j) <= k && nums[j] == key) {
        ans.push_back(i);
      }
    }
  }
  int dup = 0;
  for (auto i = 1; i < ans.size(); ++i) {
    if (ans[i] == ans[i - 1]) {
      dup++;
    } else {
      ans[i - dup] = ans[i];
    }
  }
  ans.resize(ans.size() - dup);
  return ans;
}

}  // namespace problem

#endif