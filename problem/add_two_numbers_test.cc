#include "problem/add_two_numbers.h"

#include "gtest/gtest.h"

namespace problem {

class AddTwoNumbersTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  AddTwoNumbersTest() {
    // You can do set-up work for each test here.
  }

  ~AddTwoNumbersTest() override {
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
TEST_F(AddTwoNumbersTest, caseSamelength) {
  // [2,4,3]
  auto list1 = new ListNode(2);
  list1->next = new ListNode(4);
  list1->next->next = new ListNode(3);
  // [5,6,4]
  auto list2 = new ListNode(5);
  list2->next = new ListNode(6);
  list2->next->next = new ListNode(4);
  auto output = addTwoNumbers(list1, list2);
  ASSERT_EQ(output->val, 7);
  ASSERT_EQ(output->next->val, 0);
  ASSERT_EQ(output->next->next->val, 8);
}

TEST_F(AddTwoNumbersTest, caseZero) {
  // []

  auto list1 = new ListNode(0);
  auto list2 = new ListNode(0);
  auto output = addTwoNumbers(list1, list2);
  ASSERT_EQ(output->val, 0);
  ASSERT_EQ(output->next, nullptr);
}

TEST_F(AddTwoNumbersTest, caseCarry) {
  // [9,9,9,9,9]
  auto list1 = new ListNode(9);
  list1->next = new ListNode(9);
  list1->next->next = new ListNode(9);
  list1->next->next->next = new ListNode(9);
  list1->next->next->next->next = new ListNode(9);

  // [9,9,9,9]
  auto list2 = new ListNode(9);
  list2->next = new ListNode(9);
  list2->next->next = new ListNode(9);
  list2->next->next->next = new ListNode(9);

  auto output = addTwoNumbers(list1, list2);
  ASSERT_EQ(output->val, 8);
  ASSERT_EQ(output->next->val, 9);
  ASSERT_EQ(output->next->next->val, 9);
  ASSERT_EQ(output->next->next->next->val, 9);
  ASSERT_EQ(output->next->next->next->next->val, 0);
  ASSERT_EQ(output->next->next->next->next->next->val, 1);
}

}  // namespace problem
