#ifndef LETTER_CASE_PERMUTATIONS_H_
#define LETTER_CASE_PERMUTATIONS_H_

#include <string>
#include <vector>

namespace foo {

void LetterCasePermutationHelper(std::string s, int index, std::string current,
                                 std::vector<std::string>& output) {
  if (index == s.size()) {
    output.push_back(current);
    return;
  }
  if (isdigit(s[index])) {
    current.push_back(s[index]);
    LetterCasePermutationHelper(s, index + 1, current, output);
  } else {
    auto lowercase = current;
    lowercase.push_back(tolower(s[index]));
    LetterCasePermutationHelper(s, index + 1, lowercase, output);

    auto uppercase = current;
    uppercase.push_back(toupper(s[index]));
    LetterCasePermutationHelper(s, index + 1, uppercase, output);
  }
}

std::vector<std::string> LetterCasePermutation(std::string s) {
  std::vector<std::string> output;
  LetterCasePermutationHelper(s, 0, "", output);
  return output;
}

}  // namespace foo

#endif