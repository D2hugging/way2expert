#ifndef PERMUTATION_IN_STRING_H_
#define PERMUTATION_IN_STRING_H_

#include <string>
#include <vector>

namespace problem {

// Given two strings s1 and s2, return true if s2 contains a permutation of s1,
// or false otherwise.

// In other words, return true if one of s1's permutations is the substring of
// s2.

bool CheckInclusion(std::string s1, std::string s2) {
  std::vector<int> map_s1(26);
  std::vector<int> map_s2(26);
  for (char& c : s1) {
    map_s1[c - 'a']++;
  }

  for (int i = 0; i < s2.size(); i++) {
    map_s2[s2[i] - 'a']++;
    if (i >= s1.size() - 1) {
      if (map_s2 == map_s1) {
        return true;
      }
      map_s2[s2[i - s1.size() + 1] - 'a']--;
    }
  }
  return false;
}

}  // namespace problem

#endif