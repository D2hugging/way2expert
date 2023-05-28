#include "problem/matrix_spiral.h"

#include "gtest/gtest.h"

namespace problem {

class SpiralOrderTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SpiralOrderTest() {
    // You can do set-up work for each test here.
  }

  ~SpiralOrderTest() override {
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
TEST_F(SpiralOrderTest, case1) {
  std::vector<std::vector<int>> mat{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  const auto& output = SpiralOrder(mat);
  EXPECT_EQ(output.size(), 9);
  EXPECT_EQ(output[3], 6);
  EXPECT_EQ(output[6], 7);
  EXPECT_EQ(output[8], 5);
}

TEST_F(SpiralOrderTest, case2) {
  // {1,1}
  std::vector<std::vector<int>> mat{{}};
  const auto& output = SpiralOrder(mat);
  EXPECT_EQ(output.size(), 0);
}

}  // namespace problem