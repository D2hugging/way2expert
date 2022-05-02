#ifndef K_MISSING_POSITIVE_H_
#define K_MISSING_POSITIVE_H_

#include <vector>

namespace problem {

// Given an array arr of positive integers sorted in a strictly increasing
// order, and an integer k.

// Find the kth positive integer that is missing from this array.
int FindKthPositive(std::vector<int>& arr, int k) {
  for (auto a : arr) {
    if (a > k) break;
    k++;
  }
  return k;
}

}  // namespace problem

#endif