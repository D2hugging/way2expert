#include "src/k_distant_index/k_distant_index.h"

#include "gtest/gtest.h"

namespace foo {

class FindKDistantIndicesTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  FindKDistantIndicesTest() {
    // You can do set-up work for each test here.
  }

  ~FindKDistantIndicesTest() override {
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
TEST_F(FindKDistantIndicesTest, case1) {
  //   Input: nums = [3,4,9,1,3,9,5], key = 9, k = 1
  // Output: [1,2,3,4,5,6]
  std::vector<int> data{3, 4, 9, 1, 3, 9, 5};
  int key = 9, k = 1;
  auto output = FindKDistantIndices(data, key, k);
  ASSERT_EQ(output.size(), 6);
  ASSERT_EQ(output[0], 1);
  ASSERT_EQ(output[1], 2);
  ASSERT_EQ(output[2], 3);
  ASSERT_EQ(output[3], 4);
  ASSERT_EQ(output[4], 5);
  ASSERT_EQ(output[5], 6);
}
// Tests that the Foo::Bar() method does Abc.
TEST_F(FindKDistantIndicesTest, case2) {
  //   Input: nums = [2,2,2,2,2], key = 2, k = 2
  // Output: [0,1,2,3,4]
  std::vector<int> data{2, 2, 2, 2, 2};
  int key = 2, k = 2;
  auto output = FindKDistantIndices(data, key, k);
  ASSERT_EQ(output.size(), 5);
  ASSERT_EQ(output[0], 0);
  ASSERT_EQ(output[1], 1);
  ASSERT_EQ(output[2], 2);
  ASSERT_EQ(output[3], 3);
  ASSERT_EQ(output[4], 4);
}

}  // namespace foo
