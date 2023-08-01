#ifndef _MAX_SUM_AFTER_PARTITION_H
#define _MAX_SUM_AFTER_PARTITION_H

#include <vector>

namespace problem {
// Given an integer array arr, partition the array into (contiguous) subarrays
// of length at most k. After partitioning, each subarray has their values
// changed to become the maximum value of that subarray.

// Return the largest sum of the given array after partitioning. Test cases are
// generated so that the answer fits in a 32-bit integer.

// Constraints:
// 1 <= arr.length <= 500
// 0 <= arr[i] <= 109
// 1 <= k <= arr.length

class SolutionMaxSumAfterPartitioning {
 public:
  int MaxSumAfterPartitioning(std::vector<int>& arr, int k) {
    int n = arr.size();
    std::vector<int> dp(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
      int sum_max = -1;
      int max_cur = 0;
      int len = 0;
      for (int j = i; j < std::min(n, i + k); j++) {
        len++;
        max_cur = std::max(arr[j], max_cur);
        int sum = (len)*max_cur + dp[j + 1];
        sum_max = std::max(sum, sum_max);
      }
      dp[i] = sum_max;
    }
    return dp[0];
  }
};

}  // namespace problem

#endif