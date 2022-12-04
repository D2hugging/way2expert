// You are given a positive integer array skill of even length n where skill[i]
// denotes the skill of the ith player. Divide the players into n / 2 teams of
// size 2 such that the total skill of each team is equal. The chemistry of a
// team is equal to the product of the skills of the players on that team.
// Return the sum of the chemistry of all the teams, or return -1
// if there is no way to divide the players into teams such that the total skill
// of each team is equal.

#ifndef _DEVIDE_INTO_EQUAL_SKILL_H_
#define _DEVIDE_INTO_EQUAL_SKILL_H_

#include <algorithm>
#include <vector>

namespace problem {

long long DividePlayers(std::vector<int>& skill) {
  std::sort(skill.begin(), skill.end());
  size_t bg = 0;
  size_t end = skill.size() - 1;
  int max_sum = skill[bg] + skill[end];

  long long answer = 0;
  while (bg < end) {
    int cur_sum = skill[bg] + skill[end];
    if (cur_sum != max_sum) return -1;
    answer += skill[bg] * skill[end];
    bg++;
    end--;
  }
  return answer;
}

}  // namespace problem

#endif