#include "problem/all_possible_full_bin_tree.h"

#include "gtest/gtest.h"

namespace problem {

class AllPossibleFBTsTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  AllPossibleFBTsTest() {
    // You can do set-up work for each test here.
  }

  ~AllPossibleFBTsTest() override {
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
TEST_F(AllPossibleFBTsTest, case1) {
  // Input: ranges = [[1,2],[3,4],[5,6]], left = 2, right = 5
  // Output: true
  AllPossibleFBTs fbt;
  int n = 7;
  auto output = fbt.allPossibleFBT(n);
  ASSERT_EQ(output.size(), 5);
}

TEST_F(AllPossibleFBTsTest, case2) {
  // Input: n = 3
  // Output: [[0,0,0]]
  AllPossibleFBTs fbt;
  int n = 3;
  auto output = fbt.allPossibleFBT(n);
  ASSERT_EQ(output.size(), 1);
}

}  // namespace problem
