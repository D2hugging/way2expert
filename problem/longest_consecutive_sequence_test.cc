#include "problem/longest_consecutive_sequence.h"

#include "gtest/gtest.h"

namespace problem {

class LongestConsecutiveTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  LongestConsecutiveTest() {
    // You can do set-up work for each test here.
  }

  ~LongestConsecutiveTest() override {
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
TEST_F(LongestConsecutiveTest, case1) {
  // [100,4,200,1,3,2]
  std::vector<int> data{100, 4, 200, 1, 3, 2};
  auto output = longestConsecutive(data);
  EXPECT_EQ(output, 4);
}

TEST_F(LongestConsecutiveTest, case2) {
  // [0,3,7,2,5,8,4,6,0,1]
  std::vector<int> data{0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  auto output = longestConsecutive(data);
  EXPECT_EQ(output, 9);
}

}  // namespace problem
