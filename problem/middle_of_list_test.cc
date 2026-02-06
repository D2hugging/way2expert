#include "problem/middle_of_list.h"

#include "gtest/gtest.h"

namespace problem {

class MiddleNodeTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MiddleNodeTest() {
    // You can do set-up work for each test here.
  }

  ~MiddleNodeTest() override {
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
TEST_F(MiddleNodeTest, case1) {
  // Input: head = [1,2,3,4,5]
  // Output: [3,4,5]
  // Explanation: The middle node of the list is node 3.
  auto head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);
  auto output = MiddleNode(head);
  ASSERT_EQ(output->val, 3);
  ASSERT_EQ(output->next->val, 4);
  ASSERT_EQ(output->next->next->val, 5);
  ASSERT_EQ(output->next->next->next, nullptr);
}

// Input: head = [0,1,2], k = 4
// Output: [2,0,1]
TEST_F(MiddleNodeTest, case2) {
  // Input: head = [1,2,3,4,5,6]
  // Output: [4,5,6]
  // Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
  auto head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);
  head->next->next->next->next->next = new ListNode(6);

  auto output = MiddleNode(head);
  ASSERT_EQ(output->val, 4);
  ASSERT_EQ(output->next->val, 5);
  ASSERT_EQ(output->next->next->val, 6);
  ASSERT_EQ(output->next->next->next, nullptr);
}

}  // namespace problem
