#include "problem/longest_substring_without_repeating_char.h"

#include "gtest/gtest.h"

namespace problem {

class LengthOfLongestSubstringTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  LengthOfLongestSubstringTest() {
    // You can do set-up work for each test here.
  }

  ~LengthOfLongestSubstringTest() override {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  void SetUp() override {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  void TearDown() override {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Class members declared here can be used by all tests in the test suite
  // for Foo.
};

// Tests that the Foo::Bar() method does Abc.
TEST_F(LengthOfLongestSubstringTest, case1) {
  // Input: s = "abcabcbb"
  // Output: 3
  // Explanation: The answer is "abc", with the length of 3.
  auto s = "abcabcbb";
  auto output = LengthOfLongestSubstring(s);
  ASSERT_EQ(output, 3);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(LengthOfLongestSubstringTest, case2) {
  // Input: s = "bbbbb"
  // Output: 1
  // Explanation: The answer is "b", with the length of 1.
  auto s = "bbbbb";
  auto output = LengthOfLongestSubstring(s);
  ASSERT_EQ(output, 1);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(LengthOfLongestSubstringTest, case3) {
  // Input: s = "pwwkew"
  // Output: 3
  // Explanation: The answer is "wke", with the length of 3.
  // Notice that the answer must be a substring, "pwke" is a subsequence and not
  // a substring.
  auto s = "pwwkew";
  auto output = LengthOfLongestSubstring(s);
  ASSERT_EQ(output, 3);
}

}  // namespace problem
