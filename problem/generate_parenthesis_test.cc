#include "problem/generate_parenthesis.h"

#include "gtest/gtest.h"

namespace problem {

class GenerateParenthesisTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  GenerateParenthesisTest() {
    // You can do set-up work for each test here.
  }

  ~GenerateParenthesisTest() override {
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
TEST_F(GenerateParenthesisTest, case1) {
  int n = 3;
  auto output = GenerateParenthesis(n);
  // ["((()))","(()())","(())()","()(())","()()()"]
  EXPECT_EQ(output.size(), 5);
  EXPECT_EQ(output[0], "((()))");
  EXPECT_EQ(output[1], "(()())");
  EXPECT_EQ(output[2], "(())()");
  EXPECT_EQ(output[3], "()(())");
  EXPECT_EQ(output[4], "()()()");
}

}  // namespace problem
