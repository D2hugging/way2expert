#ifndef LONGEST_CONSECUTIVE_SEQUENCE_H_
#define LONGEST_CONSECUTIVE_SEQUENCE_H_

#include <vector>
#include <unordered_set>
#include <cstddef>

namespace problem {

int longestConsecutive(const std::vector<int>& nums) {
    std::unordered_set<int> us(nums.begin(), nums.end());
    int ans = 0;
    for (size_t i=0; i < nums.size(); ++i) {
        if (us.find(nums[i]-1) == us.end()) {
            int k = nums[i];
            while (us.find(k) != us.end()) {
                k++;
            }
            ans = std::max(ans, k-nums[i]);
        }
    }
    return ans;
}

}  // namespace problem

#endif