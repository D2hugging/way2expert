#ifndef _COUNT_SORTED_VOWELS_STRINGS_H
#define _COUNT_SORTED_VOWELS_STRINGS_H

#include <vector>

namespace problem {

// Given an integer n, return the number of strings of length n that consist
// only of vowels (a, e, i, o, u) and are lexicographically sorted.

// A string s is lexicographically sorted if for all valid i, s[i] is the same
// as or comes before s[i+1] in the alphabet.

class CountSortedVowelString {
  void backtracking(const std::vector<char>& vowels, std::vector<char>& temp, int n, int idx, int& output) {
    if (temp.size() == n) {
      ++output;
      return;
    }
    for (int i = idx; i < vowels.size(); ++i) {
      temp.push_back(vowels[i]);
      backtracking(vowels, temp, n, i, output);
      temp.pop_back();
    }
  }

 public:
  int CountVowelsStirngs(int n) {
    std::vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    int output{0};
    std::vector<char> temp;
    backtracking(vowels, temp, n, 0, output);
    return output;
  }
};

}  // namespace problem

#endif