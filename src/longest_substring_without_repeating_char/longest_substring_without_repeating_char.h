#ifndef LONGEST_SUBSTRING_WITHOUT_REPEATING_CHAR_H_
#define LONGEST_SUBSTRING_WITHOUT_REPEATING_CHAR_H_

#include <algorithm>
#include <string>
#include <unordered_set>

namespace problem {

// Given a string s, find the length of the longest substring without repeating
// characters.
int LengthOfLongestSubstring(std::string s) {
  int i = 0;
  int j = 0;
  int ans = 0;
  int size = s.size();
  std::unordered_set<char> us;
  while (i < size && j < size) {
    if (us.find(s[j]) == us.end()) {
      us.insert(s[j++]);
      ans = std::max(ans, j - i);
    } else {
      us.erase(s[i++]);
    }
  }
  return ans;
}

}  // namespace problem

#endif