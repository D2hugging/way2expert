#ifndef ARE_ALMOST_EQUAL_H_
#define ARE_ALMOST_EQUAL_H_

#include <string>
#include <unordered_set>

namespace problem {

// You are given two strings s1 and s2 of equal length. A string swap is an
// operation where you choose two indices in a string (not necessarily
// different) and swap the characters at these indices.

// Return true if it is possible to make both strings equal by performing at
// most one string swap on exactly one of the strings. Otherwise, return false.
// Constraints:

// 1 <= s1.length, s2.length <= 100
// s1.length == s2.length
// s1 and s2 consist of only lowercase English letters.
bool AreAlmostEqual(std::string s1, std::string s2) {
  std::unordered_set<char> us1;
  std::unordered_set<char> us2;
  int not_equal = 0;
  for (auto i = 0; i < s1.size(); ++i) {
    if (s1[i] != s2[i]) {
      ++not_equal;
    }
    us1.insert(s1[i]);
    us2.insert(s2[i]);
  }
  return (us1 == us2) && (not_equal == 0 || not_equal == 2);
}

}  // namespace problem

#endif