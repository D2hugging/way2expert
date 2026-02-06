#include "problem/search_rotated_sorted.h"

#include "gtest/gtest.h"

namespace problem {

class SearchRotatedSortedTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SearchRotatedSortedTest() {
    // You can do set-up work for each test here.
  }

  ~SearchRotatedSortedTest() override {
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
TEST_F(SearchRotatedSortedTest, case1) {
  // [4,5,6,7,0,1,2]
  std::vector<int> data{4, 5, 6, 7, 0, 1, 2};
  int target = 0;
  int output = SearchRotatedSorted(data, target);
  EXPECT_EQ(output, 4);
}

TEST_F(SearchRotatedSortedTest, case2) {
  // [4,5,6,7,0,1,2]
  std::vector<int> data{4, 5, 6, 7, 0, 1, 2};
  int target = 3;
  int output = SearchRotatedSorted(data, target);
  EXPECT_EQ(output, -1);
}

TEST_F(SearchRotatedSortedTest, case3) {
  // [1]
  std::vector<int> data{1};
  int target = 0;
  int output = SearchRotatedSorted(data, target);
  EXPECT_EQ(output, -1);
}

}  // namespace problem
