#include "src/reverse_words_in_string3/reverse_words_in_string3.h"

#include "gtest/gtest.h"

namespace foo {

class ReverseWords3Test : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  ReverseWords3Test() {
    // You can do set-up work for each test here.
  }

  ~ReverseWords3Test() override {
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
TEST_F(ReverseWords3Test, case1) {
// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
  std::string s = "Let's take LeetCode contest";
  auto output = ReverseWords3(s);
  ASSERT_EQ(output[0], 's');
  ASSERT_EQ(output[1], '\'');
  ASSERT_EQ(output[2], 't');
  ASSERT_EQ(output[3], 'e');
  ASSERT_EQ(output[4], 'L');
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(ReverseWords3Test, case2) {
// Input: s = "God Ding"
// Output: "doG gniD"

  std::string s = "God Ding";
  auto output = ReverseWords3(s);
  ASSERT_EQ(output[0], 'd');
  ASSERT_EQ(output[1], 'o');
  ASSERT_EQ(output[2], 'G');
  ASSERT_EQ(output[3], ' ');
  ASSERT_EQ(output[4], 'g');
  ASSERT_EQ(output[5], 'n');
  ASSERT_EQ(output[6], 'i');
  ASSERT_EQ(output[7], 'D');
}

}  // namespace foo
