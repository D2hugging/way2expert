#ifndef HAPPY_NUMBER_H_
#define HAPPY_NUMBER_H_

namespace problem {

// Write an algorithm to determine if a number n is happy.

// A happy number is a number defined by the following process:

// Starting with any positive integer, replace the number by the sum of the
// squares of its digits. Repeat the process until the number equals 1 (where it
// will stay), or it loops endlessly in a cycle which does not include 1. Those
// numbers for which this process ends in 1 are happy. Return true if n is a
// happy number, and false if not.
int squareSum(int n) {
  int ans = 0;
  while (n) {
    ans += (n % 10) * (n % 10);
    n /= 10;
  }
  return ans;
}

bool IsHappy(int n) {
  int current = n;
  int next = n;
  do {
    current = squareSum(current);
    next = squareSum(squareSum(next));
  } while (current != next);
  return current == 1;
}

}  // namespace problem

#endif