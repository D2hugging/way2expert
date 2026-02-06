#include "problem/search_2d_matrix2.h"

#include "gtest/gtest.h"

namespace problem {

class SearchMatrix2Test : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SearchMatrix2Test() {
    // You can do set-up work for each test here.
  }

  ~SearchMatrix2Test() override {
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
TEST_F(SearchMatrix2Test, case1) {
  std::vector<std::vector<int>> input = {
      {1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
  int target = 5;
  EXPECT_TRUE(SearchMatrix(input, target));
}

TEST_F(SearchMatrix2Test, case2) {
  std::vector<std::vector<int>> input = {
      {1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
  int target = 20;
  EXPECT_FALSE(SearchMatrix(input, target));
}

}  // namespace problem
