#ifndef ALL_INT_IN_RANGE_H_
#define ALL_INT_IN_RANGE_H_

#include <vector>

namespace problem {
// You are given a 2D integer array ranges and two integers left and right. Each
// ranges[i] = [starti, endi] represents an inclusive interval between starti
// and endi.

// Return true if each integer in the inclusive range [left, right] is covered
// by at least one interval in ranges. Return false otherwise.

// An integer x is covered by an interval ranges[i] = [starti, endi] if starti
// <= x <= endi.
bool IsCovered(std::vector<std::vector<int>>& ranges, int left, int right) {
  for (auto x = left; x <= right; ++x) {
    auto has = false;
    for (auto& range : ranges) {
      if (x >= range[0] && x <= range[1] && !has) {
        has = true;
      }
    }
    if (!has) return false;
  }
  return true;
}

}  // namespace problem

#endif