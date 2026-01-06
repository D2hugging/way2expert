// You are given an integer array nums and an integer k.

// Return the minimum length of a subarray whose sum of the distinct values
// present in that subarray (each value counted once) is at least k. If no such
// subarray exists, return -1.

// Example 1:

// Input: nums = [2,2,3,1], k = 4

// Output: 2

// Explanation:

// The subarray [2, 3] has distinct elements {2, 3} whose sum is 2 + 3 = 5,
// which is ​​​​​​​at least k = 4. Thus, the answer is 2.

// Example 2:

// Input: nums = [3,2,3,4], k = 5

// Output: 2

// Explanation:

// The subarray [3, 2] has distinct elements {3, 2} whose sum is 3 + 2 = 5,
// which is ​​​​​​​at least k = 5. Thus, the answer is 2.

// Example 3:

// Input: nums = [5,5,4], k = 5

// Output: 1

// Explanation:

// The subarray [5] has distinct elements {5} whose sum is 5, which is at least
// k = 5. Thus, the answer is 1.

// Constraints:

// 1 <= nums.length <= 10^5
// 1 <= nums[i] <= 10^5
// 1 <= k <= 10^9

// https://leetcode.com/problems/minimum-subarray-length-with-distinct-sum-at-least-k/description/

#ifndef MIN_SUBARRAY_LEN_DISTINCT_SUM_H_
#define MIN_SUBARRAY_LEN_DISTINCT_SUM_H_

#include <climits>
#include <unordered_map>
#include <vector>

namespace problem {

int MinLength(std::vector<int> &nums, int k) {
  int n = nums.size();
  int min_len = INT_MAX;
  int left = 0;
  int sum = 0;
  std::unordered_map<int, int> count;

  for (int right = 0; right < n; ++right) {
    int x = nums[right];
    if (count[x] == 0) {
      sum += x;
    }
    count[x]++;

    while (sum >= k && left <= right) {
      min_len = std::min(min_len, right - left + 1);

      count[nums[left]]--;
      if (count[nums[left]] == 0) {
        sum -= nums[left];
      }

      left++;
    }
  }
  return min_len == INT_MAX ? -1 : min_len;
}

} // namespace problem

#endif