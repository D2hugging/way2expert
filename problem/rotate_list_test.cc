#include "problem/rotate_list.h"

#include "gtest/gtest.h"

namespace problem {

class RotateRightTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  RotateRightTest() {
     // You can do set-up work for each test here.
  }

  ~RotateRightTest() override {
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
TEST_F(RotateRightTest, case1) {
// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]
   auto head = new ListNode(1);
   head->next = new ListNode(2);
   head->next->next = new ListNode(3);
   head->next->next->next = new ListNode(4);
   head->next->next->next->next = new ListNode(5);
   auto k = 2;
   auto output = RotateRight(head, k);
   ASSERT_EQ(output->val, 4);
   ASSERT_EQ(output->next->val, 5);
   ASSERT_EQ(output->next->next->val, 1);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(RotateRightTest, case2) {
// Input: head = [0,1,2], k = 4
// Output: [2,0,1]
   auto head = new ListNode(0);
   head->next = new ListNode(1);
   head->next->next = new ListNode(2);
   auto k = 4;
   auto output = RotateRight(head, k);
   ASSERT_EQ(output->val, 2);
   ASSERT_EQ(output->next->val, 0);
   ASSERT_EQ(output->next->next->val, 1);
}

}  // namespace problem
