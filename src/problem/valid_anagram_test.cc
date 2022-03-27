#include "src/problem/valid_anagram.h"

#include "gtest/gtest.h"

namespace problem {

class IsAnagramTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  IsAnagramTest() {
    // You can do set-up work for each test here.
  }

  ~IsAnagramTest() override {
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
TEST_F(IsAnagramTest, case1) {
// Input: s = "anagram", t = "nagaram"
// Output: true
  auto s = "anagram";
  auto t = "nagaram";
  auto output = IsAnagram(s, t);
  ASSERT_EQ(output, true);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(IsAnagramTest, case2) {
// Input: s = "rat", t = "car"
// Output: false
  auto s = "rat";
  auto t = "car";
  
  auto output = IsAnagram(s, t);
  ASSERT_EQ(output, false);
}

}  // namespace problem
