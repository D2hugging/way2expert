#include "src/median_of_two_sorted_arrays/median_of_two_sorted_arrays.h"

#include "gtest/gtest.h"

namespace problem {

class MedianofTwoSortedArraysTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MedianofTwoSortedArraysTest() {
     // You can do set-up work for each test here.
  }

  ~MedianofTwoSortedArraysTest() override {
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
TEST_F(MedianofTwoSortedArraysTest, OneOfEmpty) {
  const std::vector<int> arr1{};
  const std::vector<int> arr2{1, 2, 3};
  
  EXPECT_EQ(foo::findMedianSortedArrays(arr1, arr2), 2.0);
}

// Tests that Foo does Xyz.
TEST_F(MedianofTwoSortedArraysTest, Even) {
  // Exercises the Xyz feature of Foo.
  const std::vector<int> arr1{1, 2};
  const std::vector<int> arr2{3, 4};
  
  EXPECT_EQ(foo::findMedianSortedArrays(arr1, arr2), 2.5);
}

TEST_F(MedianofTwoSortedArraysTest, Odd) {
  // Exercises the Xyz feature of Foo.
  const std::vector<int> arr1{1, 2, 3};
  const std::vector<int> arr2{4, 5};
  
  EXPECT_EQ(foo::findMedianSortedArrays(arr1, arr2), 3.0);
}

}  // namespace problem
