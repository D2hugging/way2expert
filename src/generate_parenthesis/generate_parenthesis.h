#ifndef GENERATE_PARENTHESIS_H_
#define GENERATE_PARENTHESIS_H_

#include <string>
#include <vector>

namespace foo {

// Given n pairs of parentheses, write a function to generate all combinations
// of well-formed parentheses.

void GenerateParenthesis(int open, int close, std::string s,
                         std::vector<std::string>& output) {
  if (open == 0 && close == 0) {
    output.push_back(s);
  }
  if (open > 0) {
    auto ss = s + '(';
    GenerateParenthesis(open - 1, close, ss, output);
  }
  if (close > open) {
    auto ss = s + ')';
    GenerateParenthesis(open, close - 1, ss, output);
  }
}

std::vector<std::string> GenerateParenthesis(int n) {
  std::vector<std::string> output;
  GenerateParenthesis(n, n, "", output);
  return output;
}

}  // namespace foo

#endif