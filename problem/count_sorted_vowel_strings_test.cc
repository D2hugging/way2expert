#include "problem/count_sorted_vowel_strings.h"

#include "gtest/gtest.h"

namespace problem {

class CountSortedVowelStringTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  CountSortedVowelStringTest() {
    // You can do set-up work for each test here.
  }

  ~CountSortedVowelStringTest() override {
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
TEST_F(CountSortedVowelStringTest, case1) {
  // Input: n = 1
  // Output: 5
  // Explanation: The 5 sorted strings that consist of vowels only are
  // ["a","e","i","o","u"].
  CountSortedVowelString sln;
  int n = 1;
  auto output = sln.CountVowelsStirngs(n);
  ASSERT_EQ(output, 5);
}

TEST_F(CountSortedVowelStringTest, case2) {
  // Input: n = 2
  // Output: 15
  // Explanation: The 15 sorted strings that consist of vowels only are
  // ["aa","ae","ai","ao","au","ee","ei","eo","eu","ii","io","iu","oo","ou","uu"].
  // Note that "ea" is not a valid string since 'e' comes after 'a' in the
  // alphabet.
  CountSortedVowelString sln;
  int n = 2;
  auto output = sln.CountVowelsStirngs(n);
  ASSERT_EQ(output, 15);
}

TEST_F(CountSortedVowelStringTest, case3) {
  // Input: n = 33
  // Output: 66045
  CountSortedVowelString sln;
  int n = 33;
  auto output = sln.CountVowelsStirngs(n);
  ASSERT_EQ(output, 66045);
}

}  // namespace problem