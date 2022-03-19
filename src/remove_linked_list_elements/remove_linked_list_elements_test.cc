#include "src/remove_linked_list_elements/remove_linked_list_elements.h"

#include "gtest/gtest.h"

namespace foo {

class RemoveElementsTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  RemoveElementsTest() {
     // You can do set-up work for each test here.
  }

  ~RemoveElementsTest() override {
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
TEST_F(RemoveElementsTest, case1) {
// Input: head = [1,2,6,3,4,5,6], val = 6
// Output: [1,2,3,4,5]
   auto head = new ListNode(1);
   head->next = new ListNode(2);
   head->next->next = new ListNode(6);
   head->next->next->next = new ListNode(3);
   head->next->next->next->next = new ListNode(4);
   head->next->next->next->next->next = new ListNode(5);
   head->next->next->next->next->next->next = new ListNode(6);
   auto val = 6;
   auto output = RemoveElementsRecursion(head, val);
   ASSERT_EQ(output->val, 1);
   ASSERT_EQ(output->next->val, 2);
   ASSERT_EQ(output->next->next->val, 3);
   ASSERT_EQ(output->next->next->next->val, 4);
   ASSERT_EQ(output->next->next->next->next->val, 5);
   ASSERT_EQ(output->next->next->next->next->next, nullptr);
}

TEST_F(RemoveElementsTest, case2) {
// Input: head = [], val = 1
// Output: []
   auto head = nullptr;
   auto val = 1;
   auto output = RemoveElementsRecursion(head, val);
   ASSERT_EQ(output, nullptr);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(RemoveElementsTest, case3) {
// Input: head = [7,7,7,7], val = 7
// Output: []
   auto head = new ListNode(7);
   head->next = new ListNode(7);
   head->next->next = new ListNode(7);
   head->next->next->next = new ListNode(7);
   auto val = 7;
   auto output = RemoveElementsRecursion(head, val);
   ASSERT_EQ(output, nullptr);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(RemoveElementsTest, case4) {
// Input: head = [1,2,6,3,4,5,6], val = 6
// Output: [1,2,3,4,5]
   auto head = new ListNode(1);
   head->next = new ListNode(2);
   head->next->next = new ListNode(6);
   head->next->next->next = new ListNode(3);
   head->next->next->next->next = new ListNode(4);
   head->next->next->next->next->next = new ListNode(5);
   head->next->next->next->next->next->next = new ListNode(6);
   auto val = 6;
   auto output = RemoveElementsIteration(head, val);
   ASSERT_EQ(output->val, 1);
   ASSERT_EQ(output->next->val, 2);
   ASSERT_EQ(output->next->next->val, 3);
   ASSERT_EQ(output->next->next->next->val, 4);
   ASSERT_EQ(output->next->next->next->next->val, 5);
   ASSERT_EQ(output->next->next->next->next->next, nullptr);
}

TEST_F(RemoveElementsTest, case5) {
// Input: head = [], val = 1
// Output: []
   auto head = nullptr;
   auto val = 1;
   auto output = RemoveElementsIteration(head, val);
   ASSERT_EQ(output, nullptr);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(RemoveElementsTest, case6) {
// Input: head = [7,7,7,7], val = 7
// Output: []
   auto head = new ListNode(7);
   head->next = new ListNode(7);
   head->next->next = new ListNode(7);
   head->next->next->next = new ListNode(7);
   auto val = 7;
   auto output = RemoveElementsIteration(head, val);
   ASSERT_EQ(output, nullptr);
}

}  // namespace foo
