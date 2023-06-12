#ifndef LEXICOGRAPHICALLY_SMALL_STRING_H
#define LEXICOGRAPHICALLY_SMALL_STRING_H

#include <string>

namespace problem {

std::string SmallestString(std::string s) {
  int i = 0;
  while (i < s.size() && s[i] == 'a') i++;

  if (i == s.size()) {
    s.back() = 'z';
    return s;
  }
  for (int j = i; j < s.size() && s[j] != 'a'; ++j) {
    s[j] -= 1;
  }
  return s;
}

}  // namespace problem

#endif