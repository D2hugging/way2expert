#include "problem/egg_drop_with_2_eggs_and_n_floors.h"

#include "gtest/gtest.h"

namespace problem {

class EggDropWith2EggsAndNFloorsTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  EggDropWith2EggsAndNFloorsTest() {
    // You can do set-up work for each test here.
  }

  ~EggDropWith2EggsAndNFloorsTest() override {
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
TEST_F(EggDropWith2EggsAndNFloorsTest, case1) {
  int n = 2;
  int expected = 2;
  auto output = twoEggDrop(n);
  EXPECT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(EggDropWith2EggsAndNFloorsTest, case2) {
  int n = 100;
  int expected = 14;
  auto output = twoEggDrop(n);
  EXPECT_EQ(output, expected);
}

}  // namespace problem
