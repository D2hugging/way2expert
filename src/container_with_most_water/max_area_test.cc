#include "src/container_with_most_water/max_area.h"

#include "gtest/gtest.h"

namespace problem {

class MaxAreaTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MaxAreaTest() {
     // You can do set-up work for each test here.
  }

  ~MaxAreaTest() override {
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
TEST_F(MaxAreaTest, case1) {
   // [1,8,6,2,5,4,8,3,7]
  std::vector<int> height{1,8,6,2,5,4,8,3,7};
  int output = MaxArea(height);
  EXPECT_EQ(output, 49);
}

TEST_F(MaxAreaTest, case2) {
   // [1,1]
  std::vector<int> height{1,1};
  int output = MaxArea(height);
  EXPECT_EQ(output, 1);
}

}  // namespace problem
