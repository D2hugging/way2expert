#ifndef LONGEST_INCREASING_SUBSEQUENCE_H_
#define LONGEST_INCREASING_SUBSEQUENCE_H_

#include <vector>
#include <algorithm>

namespace problem {

// longest strictly increasing subsequence.
int lengthOfLIS(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> dp(n, 0);
    dp[0] = 1;
    
    for (auto i = 1; i < n; ++i) {
        dp[i] = 1;
        for (auto j = 0; j < i; ++j) {
            if (nums[i] > nums[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }
    return *std::max_element(dp.begin(), dp.end());
}

}  // namespace problem

#endif