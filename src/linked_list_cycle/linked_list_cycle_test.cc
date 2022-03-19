#include "src/linked_list_cycle/linked_list_cycle.h"

#include "gtest/gtest.h"

namespace foo {

class HasCycleTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  HasCycleTest() {
     // You can do set-up work for each test here.
  }

  ~HasCycleTest() override {
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
TEST_F(HasCycleTest, case1) {
// Input: head = [3,2,0,-4], pos = 1
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
   auto head = new ListNode(3);
   auto pos = new ListNode(2);
   head->next = pos;
   head->next->next = new ListNode(0);
   head->next->next->next = new ListNode(-4);
   head->next->next->next->next = pos;

   auto output = HasCycle(head);
   ASSERT_EQ(output, true);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(HasCycleTest, case2) {
// Input: head = [1,2], pos = 0
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
   auto head = new ListNode(1);
   head->next = new ListNode(2);
   head->next->next = head;
   auto output = HasCycle(head);
   ASSERT_EQ(output, true);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(HasCycleTest, case3) {
// Input: head = [1], pos = -1
// Output: false
// Explanation: There is no cycle in the linked list.
   auto head = new ListNode(1);
   auto output = HasCycle(head);
   ASSERT_EQ(output, false);
}

}  // namespace foo
