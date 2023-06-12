#include "problem/lexicographically_small_string.h"

#include "gtest/gtest.h"

namespace problem {

class SmallestStringTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SmallestStringTest() {
    // You can do set-up work for each test here.
  }

  ~SmallestStringTest() override {
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
TEST_F(SmallestStringTest, case1) {
  std::string s = "cbabc";
  std::string expect = "baabc";
  auto output = SmallestString(s);
  EXPECT_EQ(output, expect);
}

TEST_F(SmallestStringTest, case2) {
  std::string s = "acbbc";
  std::string expect = "abaab";
  auto output = SmallestString(s);
  EXPECT_EQ(output, expect);
}

TEST_F(SmallestStringTest, case3) {
  std::string s = "leetcode";
  std::string expect = "kddsbncd";
  auto output = SmallestString(s);
  EXPECT_EQ(output, expect);
}

TEST_F(SmallestStringTest, case4) {
  std::string s = "aaa";
  std::string expect = "aaz";
  auto output = SmallestString(s);
  EXPECT_EQ(output, expect);
}

}  // namespace problem
