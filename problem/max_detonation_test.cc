#include "problem/max_detonation.h"

#include "gtest/gtest.h"

namespace problem {

class MaximumDetonationTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MaximumDetonationTest() {
    // You can do set-up work for each test here.
  }

  ~MaximumDetonationTest() override {
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
TEST_F(MaximumDetonationTest, case1) {
  // Input: bombs = [[2,1,3],[6,1,4]]
  // Output: 2
  // Explanation:
  // The above figure shows the positions and ranges of the 2 bombs.
  // If we detonate the left bomb, the right bomb will not be affected.
  // But if we detonate the right bomb, both bombs will be detonated.
  // So the maximum bombs that can be detonated is max(1, 2) = 2.
  std::vector<std::vector<int>> bombs{{2, 1, 3}, {6, 1, 4}};

  auto output = MaximumDetonation(bombs);
  int excepted = 2;
  ASSERT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MaximumDetonationTest, case2) {
  // Input: bombs = [[1,1,5],[10,10,5]]
  // Output: 1
  // Explanation:
  // Detonating either bomb will not detonate the other bomb, so the maximum
  // number of bombs that can be detonated is 1.
  std::vector<std::vector<int>> bombs{{1, 1, 5}, {10, 10, 5}};

  auto output = MaximumDetonation(bombs);
  int excepted = 1;

  ASSERT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MaximumDetonationTest, case3) {
  // Input: bombs = [[1,2,3],[2,3,1],[3,4,2],[4,5,3],[5,6,4]]
  // Output: 5
  // Explanation:
  // The best bomb to detonate is bomb 0 because:
  // - Bomb 0 detonates bombs 1 and 2. The red circle denotes the range of bomb
  // 0.
  // - Bomb 2 detonates bomb 3. The blue circle denotes the range of bomb 2.
  // - Bomb 3 detonates bomb 4. The green circle denotes the range of bomb 3.
  // Thus all 5 bombs are detonated.
  std::vector<std::vector<int>> bombs{
      {1, 2, 3}, {2, 3, 1}, {3, 4, 2}, {4, 5, 3}, {5, 6, 4}};
  int excepted = 5;

  auto output = MaximumDetonation(bombs);
  ASSERT_EQ(output, excepted);
}

}  // namespace problem
