#ifndef MAX_PRODUCT_AFTER_K_INCRE_H_
#define MAX_PRODUCT_AFTER_K_INCRE_H_

#include <cmath>
#include <queue>
#include <vector>

namespace problem {

// You are given an array of non-negative integers nums and an integer k. In one
// operation, you may choose any element from nums and increment it by 1.

// Return the maximum product of nums after at most k operations. Since the
// answer may be very large, return it modulo 109 + 7
int MaximumProduct(std::vector<int>& nums, int k) {
  std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;
  for (auto& x : nums) {
    min_heap.push(x);
  }
  while (k--) {
    auto x = min_heap.top();
    min_heap.pop();
    min_heap.push(x + 1);
  }
  long long int ans = 1;
  int mod = std::pow(10, 9) + 7;
  while (!min_heap.empty()) {
    ans = (ans * min_heap.top()) % mod;
    min_heap.pop();
  }

  return int(ans);
}
}  // namespace problem

#endif