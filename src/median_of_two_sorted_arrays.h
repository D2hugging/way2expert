#ifndef median_of_two_sorted_arrays_H
#define median_of_two_sorted_arrays_H

#include <vector>

namespace foo {

double findMedianSortedArrays(std::vector<int>& nums1,
                              std::vector<int>& nums2) {
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

}  // namespace foo

#endif