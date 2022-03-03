#ifndef MERGE_INTERVALS_H_
#define MERGE_INTERVALS_H_

#include <vector>
#include <algorithm>

namespace foo {

// Given an array of intervals where intervals[i] = [starti, endi], merge all
// overlapping intervals, and return an array of the non-overlapping intervals
// that cover all the intervals in the input.

struct cmp {
  bool operator()(const std::vector<int>& a, const std::vector<int>& b) {
    return a[0] < b[0];
  }
};

std::vector<std::vector<int>> MergeIntervals(std::vector<std::vector<int>>& intervals) {
  std::vector<std::vector<int>> ans;
  std::sort(intervals.begin(), intervals.end(), cmp());
  for (auto& interval : intervals) {
    if (ans.empty()) {
      ans.push_back(interval);
    } else if (ans.back()[1] < interval[0]) {
      ans.push_back(interval);
    } else {
      auto back = ans.back();
      ans.pop_back();
      ans.push_back({back[0], std::max(back[1], interval[1])});
    }
  }
  return ans;
}

}  // namespace foo

#endif