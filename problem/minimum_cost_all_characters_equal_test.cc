#include "minimum_cost_all_characters_equal.h"

#include "gtest/gtest.h"

namespace problem {

class MinimumCostTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MinimumCostTest() {
    // You can do set-up work for each test here.
  }

  ~MinimumCostTest() override {
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
TEST_F(MinimumCostTest, case1) {
  std::string s1{"0011"};

  auto output = MinimumCost(s1);
  EXPECT_EQ(output, 2);
}

TEST_F(MinimumCostTest, case2) {
  std::string s2{"010101"};
  auto output = MinimumCost(s2);
  EXPECT_EQ(output, 9);
}

}  // namespace problem