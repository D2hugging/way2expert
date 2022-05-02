#ifndef LARGEST_NUM_AFTER_DIGIT_SWAP_H_
#define LARGEST_NUM_AFTER_DIGIT_SWAP_H_

#include <string>
#include <algorithm>

namespace problem {

// You are given a positive integer num. You may swap any two digits of num that
// have the same parity (i.e. both odd digits or both even digits).

// Return the largest possible value of num after any number of swaps.

int LargestInteger(int num) {
  std::string s = std::to_string(num);
  std::string odd;
  std::string even;
  for (int i = 0; i < s.size(); ++i) {
    if ((s[i] - '0') & 1) {
      odd += s[i];
    } else {
      even += s[i];
    }
  }
  std::sort(odd.begin(), odd.end(), std::greater<char>());
  std::sort(even.begin(), even.end(), std::greater<char>());

  for (int i = 0, j = 0, k = 0; k < s.size(); ++k) {
    if ((s[k] - '0') & 1) {
      s[k] = odd[i++];
    } else {
      s[k] = even[j++];
    }
  }
  return stoi(s);
}

}  // namespace problem

#endif