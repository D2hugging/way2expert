#include "problem/permutation_in_string.h"

#include "gtest/gtest.h"

namespace problem {

class CheckInclusionTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  CheckInclusionTest() {
    // You can do set-up work for each test here.
  }

  ~CheckInclusionTest() override {
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
TEST_F(CheckInclusionTest, case1) {
  // Input: s1 = "ab", s2 = "eidbaooo"
  // Output: true
  // Explanation: s2 contains one permutation of s1 ("ba").
  auto s1 = "ab";
  auto s2 = "eidbaooo";
  auto output = CheckInclusion(s1, s2);
  ASSERT_EQ(output, true);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(CheckInclusionTest, case2) {
  // Input: s1 = "ab", s2 = "eidboaoo"
  // Output: false
  auto s1 = "ab";
  auto s2 = "eidboaoo";
  auto output = CheckInclusion(s1, s2);
  ASSERT_EQ(output, false);
}

}  // namespace problem
