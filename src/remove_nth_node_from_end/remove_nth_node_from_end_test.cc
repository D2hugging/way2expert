#include "src/remove_nth_node_from_end/remove_nth_node_from_end.h"

#include "gtest/gtest.h"

namespace foo {

class RemoveNthFromEndTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  RemoveNthFromEndTest() {
    // You can do set-up work for each test here.
  }

  ~RemoveNthFromEndTest() override {
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

// Input: head = [1,2,3,4,5], k = 2
// Output: [1,2,3,5]
TEST_F(RemoveNthFromEndTest, case1) {
  auto head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);
  auto k = 2;
  auto output = RemoveNthFromEnd(head, k);
  ASSERT_EQ(output->val, 1);
  ASSERT_EQ(output->next->val, 2);
  ASSERT_EQ(output->next->next->val, 3);
  ASSERT_EQ(output->next->next->next->val, 5);
  ASSERT_EQ(output->next->next->next->next, nullptr);
}

// Input: head = [1], k = 1
// Output: []
TEST_F(RemoveNthFromEndTest, case2) {
  auto head = new ListNode(1);
  auto k = 1;
  auto output = RemoveNthFromEnd(head, k);
  ASSERT_EQ(output, nullptr);
}

TEST_F(RemoveNthFromEndTest, case3) {
  auto head = new ListNode(1);
  head->next = new ListNode(2);
  auto k = 1;
  auto output = RemoveNthFromEnd(head, k);
  ASSERT_EQ(output->val, 1);
  ASSERT_EQ(output->next, nullptr);
}

}  // namespace foo
