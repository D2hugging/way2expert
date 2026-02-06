#include "problem/edit_distance.h"

#include "gtest/gtest.h"

namespace problem {

class EditDistanceTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  EditDistanceTest() {
    // You can do set-up work for each test here.
  }

  ~EditDistanceTest() override {
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
TEST_F(EditDistanceTest, case1) {
  int output = minDistance("horse", "ros");
  int excepted{3};
  ASSERT_EQ(output, excepted);
}

TEST_F(EditDistanceTest, case2) {
  int output = minDistance("intention", "execution");
  int excepted{5};
  ASSERT_EQ(output, excepted);
}

}  // namespace problem