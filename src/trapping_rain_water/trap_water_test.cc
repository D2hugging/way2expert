#include "src/trapping_rain_water/trap_water.h"

#include "gtest/gtest.h"

namespace problem {

class TrapWaterTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  TrapWaterTest() {
     // You can do set-up work for each test here.
  }

  ~TrapWaterTest() override {
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
TEST_F(TrapWaterTest, case1) {
   // [0,1,0,2,1,0,1,3,2,1,2,1]
  std::vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
  int output = TrapWater(height);
  EXPECT_EQ(output, 6);
}

TEST_F(TrapWaterTest, case2) {
   // [4,2,0,3,2,5]]
  std::vector<int> height{4,2,0,3,2,5};
  int output = TrapWater(height);
  EXPECT_EQ(output, 9);
}

}  // namespace problem
