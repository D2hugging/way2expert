#include "problem/divide_into_equal_skill.h"

#include "gtest/gtest.h"

namespace problem {

class DividePlayersTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  DividePlayersTest() {
    // You can do set-up work for each test here.
  }

  ~DividePlayersTest() override {
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
TEST_F(DividePlayersTest, case1) {
// Input: skill = [3,2,5,1,3,4]
// Output: 22
// Explanation: 
// Divide the players into the following teams: (1, 5), (2, 4), (3, 3), where each team has a total skill of 6.
// The sum of the chemistry of all the teams is: 1 * 5 + 2 * 4 + 3 * 3 = 5 + 8 + 9 = 22.
  std::vector<int> data = {3,2,5,1,3,4};
  auto output = DividePlayers(data);
  int excepted {22};
  ASSERT_EQ(output, excepted);
}

// // Tests that the Foo::Bar() method does Abc.
// TEST_F(DividePlayersTest, case2) {
// //   Input: grid = [[3,2],[1,0]]
// // Output: 0
//   std::vector<std::vector<int>> data{{3,2},{1,0}};
//   int excepted{0};

//   auto output = CountNegatives(data);
//   ASSERT_EQ(output, excepted);
// }

}  // namespace problem