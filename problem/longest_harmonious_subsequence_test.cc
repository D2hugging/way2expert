#include "problem/longest_harmonious_subsequence.h"

#include "gtest/gtest.h"

namespace problem {

class FindLHSTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  FindLHSTest() {
    // You can do set-up work for each test here.
  }

  ~FindLHSTest() override {
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
TEST_F(FindLHSTest, case1) {
  // [1,3,2,2,5,2,3,7]
  std::vector<int> data{1, 3, 2, 2, 5, 2, 3, 7};
  auto output = FindLHS(data);
  ASSERT_EQ(output, 5);
}

TEST_F(FindLHSTest, case2) {
  // [1,2,3,4]
  std::vector<int> data{1, 2, 3, 4};
  auto output = FindLHS(data);
  ASSERT_EQ(output, 2);
}

TEST_F(FindLHSTest, case3) {
  // [1,1,1,1]
  std::vector<int> data{1, 1, 1, 1};
  auto output = FindLHS(data);
  ASSERT_EQ(output, 0);
}

}  // namespace problem
