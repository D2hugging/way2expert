#include "problem/max_number_marked_idx.h"

#include "gtest/gtest.h"

namespace problem {

class MaximumNumberMarkedIndicesTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MaximumNumberMarkedIndicesTest() {
    // You can do set-up work for each test here.
  }

  ~MaximumNumberMarkedIndicesTest() override {
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
TEST_F(MaximumNumberMarkedIndicesTest, case1) {
  std::vector<int> data{3, 5, 2, 4};
  auto output = MaxNumOfMarkedIndices(data);
  int excepted = 2;
  ASSERT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MaximumNumberMarkedIndicesTest, case2) {
  std::vector<int> data{9, 2, 5, 4};
  int excepted = 4;
  auto output = MaxNumOfMarkedIndices(data);
  ASSERT_EQ(output, excepted);
}

TEST_F(MaximumNumberMarkedIndicesTest, case3) {
  std::vector<int> data{7, 6, 8};
  int excepted = 0;
  auto output = MaxNumOfMarkedIndices(data);
  ASSERT_EQ(output, excepted);
}

}  // namespace problem
