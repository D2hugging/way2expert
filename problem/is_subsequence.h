#ifndef IS_SUBSEQUENCE_H_
#define IS_SUBSEQUENCE_H_

#include <string>

namespace problem {

// Given two strings s and t, return true if s is a subsequence of t, or false
// otherwise.

// A subsequence of a string is a new string that is formed from the original
// string by deleting some (can be none) of the characters without disturbing
// the relative positions of the remaining characters. (i.e., "ace" is a
// subsequence of "abcde" while "aec" is not).
bool IsSubsequence(std::string s, std::string t) {
  int m = s.size();
  int n = t.size();
  int i = 0, j = 0;
  for (; i < m, j < n; j++) {
    if (s[i] == t[j]) {
      i++;
    }
  }
  return i == m;
}

}  // namespace problem

#endif