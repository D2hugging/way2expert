// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array
// of the non-overlapping intervals that cover all the intervals in the input.

// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
// Example 2:

// Input: intervals = [[1,4],[4,5]]
// Output: [[1,5]]
// Explanation: Intervals [1,4] and [4,5] are considered overlapping.
// Example 3:

// Input: intervals = [[4,7],[1,4]]
// Output: [[1,7]]
// Explanation: Intervals [1,4] and [4,7] are considered overlapping.

// Constraints:

// 1 <= intervals.length <= 10^4
// intervals[i].length == 2
// 0 <= starti <= endi <= 10^4

#ifndef MERGE_INTERVALS_H_
#define MERGE_INTERVALS_H_

#include <algorithm>
#include <vector>

namespace problem {

// Given an array of intervals where intervals[i] = [starti, endi], merge all
// overlapping intervals, and return an array of the non-overlapping intervals
// that cover all the intervals in the input.

struct cmp {
  bool operator()(const std::vector<int>& a, const std::vector<int>& b) { return a[0] < b[0]; }
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

}  // namespace problem

#endif