// Given two strings word1 and word2, return the minimum number of operations
// required to convert word1 to word2.

// You have the following three operations permitted on a word:

// Insert a character
// Delete a character
// Replace a character

// Example 1:

// Input: word1 = "horse", word2 = "ros"
// Output: 3
// Explanation:
// horse -> rorse (replace 'h' with 'r')
// rorse -> rose (remove 'r')
// rose -> ros (remove 'e')
// Example 2:

// Input: word1 = "intention", word2 = "execution"
// Output: 5
// Explanation:
// intention -> inention (remove 't')
// inention -> enention (replace 'i' with 'e')
// enention -> exention (replace 'n' with 'x')
// exention -> exection (replace 'n' with 'c')
// exection -> execution (insert 'u')

// Constraints:

// 0 <= word1.length, word2.length <= 500
// word1 and word2 consist of lowercase English letters.

#ifndef _EDIT_DISTANCE_H
#define _EDIT_DISTANCE_H

#include <algorithm>
#include <string>
#include <vector>

namespace problem {

int minDistance(std::string word1, std::string word2) {
  int m = word1.size();
  int n = word2.size();
  std::vector<std::vector<int>> dp(m + 1, vstd::ector<int>(n + 1));
  for (int i = 0; i <= m; i++) dp[i][0] = i;
  for (int j = 0; j <= n; j++) dp[0][j] = j;
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (word1[i - 1] == word2[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1];
      } else {
        auto del = dp[i - 1][j] + 1;
        auto ins = dp[i][j - 1] + 1;
        auto rep = dp[i - 1][j - 1] + 1;
        dp[i][j] = std::min(std::min(del, ins), rep);
      }
    }
  }
  return dp[m][n];
}
}  // namespace problem