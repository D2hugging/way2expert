#include "problem/merge_two_sorted_list.h"

#include "gtest/gtest.h"

namespace problem {

class MergeTwoListsTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MergeTwoListsTest() {
    // You can do set-up work for each test here.
  }

  ~MergeTwoListsTest() override {
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
TEST_F(MergeTwoListsTest, case1) {
  // Input: list1 = [1,2,4], list2 = [1,3,4]
  // Output: [1,1,2,3,4,4]
  auto list1 = new ListNode(1);
  list1->next = new ListNode(2);
  list1->next->next = new ListNode(4);
  auto list2 = new ListNode(1);
  list2->next = new ListNode(3);
  list2->next->next = new ListNode(4);

  auto output = MergeTwoLists(list1, list2);
  ASSERT_EQ(output->val, 1);
  ASSERT_EQ(output->next->val, 1);
  ASSERT_EQ(output->next->next->val, 2);
  ASSERT_EQ(output->next->next->next->val, 3);
  ASSERT_EQ(output->next->next->next->next->val, 4);
  ASSERT_EQ(output->next->next->next->next->next->val, 4);
  ASSERT_EQ(output->next->next->next->next->next->next, nullptr);
}

TEST_F(MergeTwoListsTest, case2) {
  // Input: list1 = [], list2 = []
  // Output: []
  auto list1 = nullptr;
  auto list2 = nullptr;

  auto output = MergeTwoLists(list1, list2);
  ASSERT_EQ(output, nullptr);
}

TEST_F(MergeTwoListsTest, case3) {
  // Input: list1 = [], list2 = [0]
  // Output: [0]
  auto list1 = nullptr;
  auto list2 = new ListNode(0);

  auto output = MergeTwoLists(list1, list2);
  ASSERT_EQ(output->val, 0);
  ASSERT_EQ(output->next, nullptr);
}

}  // namespace problem
