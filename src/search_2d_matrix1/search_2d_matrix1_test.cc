#include "src/search_2d_matrix1/search_2d_matrix1.h"

#include "gtest/gtest.h"

namespace foo {

class SearchMatrix1Test : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SearchMatrix1Test() {
    // You can do set-up work for each test here.
  }

  ~SearchMatrix1Test() override {
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
TEST_F(SearchMatrix1Test, case1) {
  // Input: matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}}, target = 3
  // Output: true
  std::vector<std::vector<int>> data{
      {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int target = 3;
  auto output = SearchMatrix1(data, target);
  ASSERT_EQ(output, true);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SearchMatrix1Test, case2) {
  // Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
  // Output: false

  std::vector<std::vector<int>> data{
      {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int target = 13;
  auto output = SearchMatrix1(data, target);
  ASSERT_EQ(output, false);
}

}  // namespace foo
