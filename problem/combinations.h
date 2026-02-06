#ifndef COMBINATION_H_
#define COMBINATION_H_

#include <vector>

namespace problem {

// Given two integers n and k, return all possible combinations of k numbers out
// of the range [1, n].

// You may return the answer in any order.

void CombineHelper(int n, int k, int index, std::vector<int> current, std::vector<std::vector<int>>& output) {
  if (current.size() == k) {
    output.push_back(current);
    return;
  }
  for (auto i = index; i <= n; ++i) {
    current.push_back(i);
    CombineHelper(n, k, i + 1, current, output);
    current.pop_back();
  }
}

std::vector<std::vector<int>> Combine(int n, int k) {
  std::vector<int> current;
  std::vector<std::vector<int>> output;
  CombineHelper(n, k, 1, current, output);
  return output;
}

}  // namespace problem

#endif