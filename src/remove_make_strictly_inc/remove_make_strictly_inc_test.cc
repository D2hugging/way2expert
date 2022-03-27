#include "src/remove_make_strictly_inc/remove_make_strictly_inc.h"

#include "gtest/gtest.h"

namespace problem {

class CanBeIncreasingTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  CanBeIncreasingTest() {
     // You can do set-up work for each test here.
  }

  ~CanBeIncreasingTest() override {
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
TEST_F(CanBeIncreasingTest, case1) {
   // [1,2,10,5,7]
   std::vector<int> data {1,2,10,5,7};
   auto output = CanBeIncreasing(data);
   ASSERT_EQ(output, true);
}


TEST_F(CanBeIncreasingTest, case2) {
   // [2,3,1,2]
   std::vector<int> data {2,3,1,2};
   auto output = CanBeIncreasing(data);
   ASSERT_EQ(output, false);
}

TEST_F(CanBeIncreasingTest, case3) {
   // [1,1,1]
   std::vector<int> data {1,1,1};
   auto output = CanBeIncreasing(data);
   ASSERT_EQ(output, false);
}

}  // namespace problem
