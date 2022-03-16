#ifndef ROTATE_ARRAY_H_
#define ROTATE_ARRAY_H_

#include <algorithm>
#include <string>

namespace foo {

// Given a string s, reverse the order of characters in each word within a
// sentence while still preserving whitespace and initial word order.

std::string ReverseWords3(std::string s) {
  int prev = 0;
  for (int i = 0; i < s.size(); i++) {
    if (std::isspace(s[i])) {
      std::reverse(s.begin() + prev, s.begin() + i);
      prev = i + 1;
    }
  }
  std::reverse(s.begin() + prev, s.end());
  return s;
}

}  // namespace foo

#endif