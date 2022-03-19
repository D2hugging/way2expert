#ifndef VALID_ANAGRAM_H_
#define VALID_ANAGRAM_H_

#include <string>
#include <unordered_map>

namespace foo {

// Given two strings s and t, return true if t is an anagram of s, and false
// otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a
// different word or phrase, typically using all the original letters exactly
// once.
bool IsAnagram(std::string s, std::string t) {
  if (s.size() != t.size()) return false;

  std::unordered_map<char, int> um;
  for (auto& c : s) {
    um[c]++;
  }
  for (auto& c : t) {
    auto it = um.find(c);
    if (it == um.end()) {
      return false;
    } else {
      if (it->second == 0) {
        return false;
      }
      it->second--;
    }
  }
  return true;
}

}  // namespace foo

#endif