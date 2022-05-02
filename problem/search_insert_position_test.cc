#include "problem/search_insert_position.h"

#include "gtest/gtest.h"

namespace problem {

class SearchInsertTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SearchInsertTest() {
    // You can do set-up work for each test here.
  }

  ~SearchInsertTest() override {
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
TEST_F(SearchInsertTest, case1) {
  //   Input: nums = [1,3,5,6], target = 5
  // Output: 2
  std::vector<int> data{1, 3, 5, 6};
  int target = 5;
  auto output = SearchInsert(data, target);
  ASSERT_EQ(output, 2);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SearchInsertTest, case2) {
  // Input: nums = [1,3,5,6], target = 2
  // Output: 1

  std::vector<int> data{1, 3, 5, 6};
  int target = 2;
  auto output = SearchInsert(data, target);
  ASSERT_EQ(output, 1);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SearchInsertTest, case3) {
  //   Input: nums = [1,3,5,6], target = 7
  // Output: 4
  std::vector<int> data{1, 3, 5, 6};
  int target = 7;

  auto output = SearchInsert(data, target);
  ASSERT_EQ(output, 4);
}

}  // namespace problem
