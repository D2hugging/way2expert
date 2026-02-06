// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

// Constraints:

// nums1.length == m
// nums2.length == n
// 0 <= m <= 1000
// 0 <= n <= 1000
// 1 <= m + n <= 2000
// -106 <= nums1[i], nums2[i] <= 10^6

#ifndef MEDIAN_OF_TWO_SORTED_ARRAYS_H_
#define MEDIAN_OF_TWO_SORTED_ARRAYS_H_

#include <vector>

namespace problem {

double findMedianSortedArrays(const std::vector<int>& nums1, const std::vector<int>& nums2) {
  int m = nums1.size();
  int n = nums2.size();
  int x = 0;
  int y = 0;
  int i = 0, j = 0;
  int count = 0;
  while (count <= (m + n) / 2) {
    y = x;
    if (i < m && j < n) {
      x = nums1[i] > nums2[j] ? nums2[j++] : nums1[i++];
    } else if (i < m) {
      x = nums1[i++];
    } else {
      x = nums2[j++];
    }
    count++;
  }
  if ((m + n) % 2) {
    return x;
  } else {
    return static_cast<double>(x + y) / 2;
  }
}

}  // namespace problem

#endif