#include "src/queue_using_stack/queue_using_stack.h"

#include "gtest/gtest.h"

namespace foo {

class MyQueueTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MyQueueTest() {
    // You can do set-up work for each test here.
  }

  ~MyQueueTest() override {
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
  MyQueue q_;
};

// Tests that the Foo::Bar() method does Abc.
TEST_F(MyQueueTest, case_push) {

  q_.push(1);
  ASSERT_TRUE(!q_.empty());
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MyQueueTest, case_peek) {
  q_.push(1);
  ASSERT_EQ(q_.peek(), 1);
}

TEST_F(MyQueueTest, case_pop) {
  q_.push(1);
  ASSERT_TRUE(!q_.empty());
  q_.pop();
  ASSERT_TRUE(q_.empty());
}

}  // namespace foo
