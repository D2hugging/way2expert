#include "src/next_greater_element1/next_greater_element1.h"

#include "gtest/gtest.h"

namespace problem {

class NextGreaterElement1Test : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  NextGreaterElement1Test() {
     // You can do set-up work for each test here.
  }

  ~NextGreaterElement1Test() override {
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
TEST_F(NextGreaterElement1Test, case1) {
//    Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]
   std::vector<int> nums1 {4,1,2};
   std::vector<int> nums2 {1,3,4,2};

   auto output = NextGreaterElement1(nums1, nums2);
   ASSERT_EQ(output[0], -1);
   ASSERT_EQ(output[1], 3);
   ASSERT_EQ(output[2], -1);

}
// Tests that the Foo::Bar() method does Abc.
TEST_F(NextGreaterElement1Test, case2) {
// Input: nums1 = [2,4], nums2 = [1,2,3,4]
// Output: [3,-1]

   std::vector<int> nums1 {2,4};
   std::vector<int> nums2 {1,2,3,4};

   auto output = NextGreaterElement1(nums1, nums2);
   ASSERT_EQ(output[0], 3);
   ASSERT_EQ(output[1], -1);

}


}  // namespace problem
