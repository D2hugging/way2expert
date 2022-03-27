#include "src/problem/reverse_integer.h"

#include "gtest/gtest.h"

namespace problem {

class ReverseIntegerTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  ReverseIntegerTest() {
     // You can do set-up work for each test here.
  }

  ~ReverseIntegerTest() override {
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
TEST_F(ReverseIntegerTest, casePositive) {
   // 123
   int val = 123;
   int answer = 321;
   auto output = reverseInteger(val);
   ASSERT_EQ(output, answer);
}

TEST_F(ReverseIntegerTest, caseNeg) {
   // -123
   int val = -123;
   int answer = -321;
   auto output = reverseInteger(val);
   ASSERT_EQ(output, answer);
}

TEST_F(ReverseIntegerTest, caseZero) {
   // 123
   int val = 120;
   int answer = 21;
   auto output = reverseInteger(val);
   ASSERT_EQ(output, answer);
}

}  // namespace problem
