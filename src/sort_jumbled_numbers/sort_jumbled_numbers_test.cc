#include "src/sort_jumbled_numbers/sort_jumbled_numbers.h"

#include "gtest/gtest.h"

namespace problem {

class SortJumbledNumbersTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SortJumbledNumbersTest() {
    // You can do set-up work for each test here.
  }

  ~SortJumbledNumbersTest() override {
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
TEST_F(SortJumbledNumbersTest, case1) {
  std::vector<int> mapping{9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  std::vector<int> data{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto output = SortJumbled(mapping, data);
  EXPECT_EQ(output[0], 9);
  EXPECT_EQ(output[1], 8);
  EXPECT_EQ(output[2], 7);
  EXPECT_EQ(output[3], 6);
  EXPECT_EQ(output[4], 5);
  EXPECT_EQ(output[5], 4);
  EXPECT_EQ(output[6], 3);
  EXPECT_EQ(output[7], 2);
  EXPECT_EQ(output[8], 1);
  EXPECT_EQ(output[9], 0);
}

TEST_F(SortJumbledNumbersTest, case2) {
  std::vector<int> mapping{8,9,4,0,2,1,3,5,7,6};
  std::vector<int> data{991,338,38};
  auto output = SortJumbled(mapping, data);
  EXPECT_EQ(output[0], 338);
  EXPECT_EQ(output[1], 38);
  EXPECT_EQ(output[2], 991);
}

TEST_F(SortJumbledNumbersTest, case3) {
  std::vector<int> mapping{0,1,2,3,4,5,6,7,8,9};
  std::vector<int> data{789,456,123};
  auto output = SortJumbled(mapping, data);
  EXPECT_EQ(output[0], 123);
  EXPECT_EQ(output[1], 456);
  EXPECT_EQ(output[2], 789);
}
}  // namespace problem
