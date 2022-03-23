#include "src/letter_case_permutation/letter_case_permutation.h"

#include "gtest/gtest.h"

namespace foo {

class LetterCasePermutationTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  LetterCasePermutationTest() {
    // You can do set-up work for each test here.
  }

  ~LetterCasePermutationTest() override {
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
TEST_F(LetterCasePermutationTest, case1) {
// Input: s = "a1b2"
// Output: ["a1b2","a1B2","A1b2","A1B2"]

  auto s = "a1b2";
  auto output = LetterCasePermutation(s);
  std::vector<std::string> expected{"a1b2", "a1B2", "A1b2", "A1B2"};
  ASSERT_EQ(output.size(), 4);
  ASSERT_EQ(output[0], expected[0]);
  ASSERT_EQ(output[1], expected[1]);
  ASSERT_EQ(output[2], expected[2]);
  ASSERT_EQ(output[3], expected[3]);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(LetterCasePermutationTest, case2) {
// Input: s = "3z4"
// Output: ["3z4","3Z4"]
auto s = "3z4";
  std::vector<std::string> expected{"3z4", "3Z4"};

  auto output = LetterCasePermutation(s);
  ASSERT_EQ(output.size(), 2);
  ASSERT_EQ(output[0], expected[0]);
  ASSERT_EQ(output[1], expected[1]);
}

}  // namespace foo
