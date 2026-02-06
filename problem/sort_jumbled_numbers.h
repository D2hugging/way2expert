#ifndef SORT_JUMBLED_NUMBERS_H_
#define SORT_JUMBLED_NUMBERS_H_

#include <algorithm>
#include <stack>
#include <vector>

namespace problem {

// You are given a 0-indexed integer array mapping which represents the mapping
// rule of a shuffled decimal system. mapping[i] = j means digit i should be
// mapped to digit j in this system. The mapped value of an integer is the new
// integer obtained by replacing each occurrence of digit i in the integer with
// mapping[i] for all 0 <= i <= 9. You are also given another integer array
// nums. Return the array nums sorted in non-decreasing order based on the
// mapped values of its elements. Notes: Elements with the same mapped values
// should appear in the same relative order as in the input. The elements of
// nums should only be sorted based on their mapped values and not be replaced
// by them.

struct cmp {
  bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    if (a.second != b.second) {
      return a.second < b.second;
    } else {
      return a.first < b.first;
    }
  }
};

std::vector<int> SortJumbled(std::vector<int>& mapping, std::vector<int>& nums) {
  std::vector<std::pair<int, int>> tmp;
  std::stack<int> st;
  for (int i = 0; i < nums.size(); ++i) {
    auto a = nums[i];
    auto b = 0;
    if (a == 0) {
      b = mapping[a];
    } else {
      while (a > 0) {
        st.push(mapping[a % 10]);
        a /= 10;
      }
      while (!st.empty()) {
        auto t = st.top();
        st.pop();
        b = b * 10 + t;
      }
    }

    tmp.push_back({i, b});
  }
  std::sort(tmp.begin(), tmp.end(), cmp());
  std::vector<int> ans;
  for (auto& p : tmp) {
    ans.push_back(nums[p.first]);
  }
  return ans;
}

}  // namespace problem

#endif