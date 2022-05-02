#include "problem/all_int_in_range.h"

#include "gtest/gtest.h"

namespace problem {

class IsCoveredTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  IsCoveredTest() {
    // You can do set-up work for each test here.
  }

  ~IsCoveredTest() override {
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
TEST_F(IsCoveredTest, case1) {
  //    Input: ranges = [[1,2],[3,4],[5,6]], left = 2, right = 5
  // Output: true
  std::vector<std::vector<int>> data{{1, 2}, {3, 4}, {5, 6}};
  int left = 2;
  int right = 5;
  auto output = IsCovered(data, left, right);
  ASSERT_EQ(output, true);
}

TEST_F(IsCoveredTest, case2) {
  // Input: ranges = [[1,10],[10,20]], left = 21, right = 21
  // Output: false
  std::vector<std::vector<int>> data{{1, 10}, {10, 20}, {5, 6}};
  int left = 21;
  int right = 21;
  auto output = IsCovered(data, left, right);
  ASSERT_EQ(output, false);
}

}  // namespace problem
