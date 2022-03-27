
#include "src/problem/merge_intervals.h"

#include "gtest/gtest.h"

namespace problem {

class MergeIntervalsTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MergeIntervalsTest() {
     // You can do set-up work for each test here.
  }

  ~MergeIntervalsTest() override {
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
TEST_F(MergeIntervalsTest, case1) {
   // [[1,3],[2,6],[8,10],[15,18]]
   std::vector<std::vector<int>> data{{1,3},{2,6},{8,10},{15,18}};
   auto output = MergeIntervals(data);

  EXPECT_EQ(output.size(), 3);
  EXPECT_EQ(output[0][1], 6);
  EXPECT_EQ(output[1][0], 8);
  EXPECT_EQ(output[2][1], 18);

}

}  // namespace problem
