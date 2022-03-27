#include "src/problem/count_collisions_on_road.h"

#include "gtest/gtest.h"

namespace problem {

class CountCollisionsTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  CountCollisionsTest() {
    // You can do set-up work for each test here.
  }

  ~CountCollisionsTest() override {
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
TEST_F(CountCollisionsTest, case1) {
// Input: directions = "RLRSLL"
// Output: 5
// Explanation:
// The collisions that will happen on the road are:
// - Cars 0 and 1 will collide with each other. Since they are moving in opposite directions, the number of collisions becomes 0 + 2 = 2.
// - Cars 2 and 3 will collide with each other. Since car 3 is stationary, the number of collisions becomes 2 + 1 = 3.
// - Cars 3 and 4 will collide with each other. Since car 3 is stationary, the number of collisions becomes 3 + 1 = 4.
// - Cars 4 and 5 will collide with each other. After car 4 collides with car 3, it will stay at the point of collision and get hit by car 5. The number of collisions becomes 4 + 1 = 5.
// Thus, the total number of collisions that will happen on the road is 5. 
  auto directions = "RLRSLL";
  auto output = CountCollisions(directions);
  ASSERT_EQ(output, 5);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(CountCollisionsTest, case2) {
// Input: directions = "LLRR"
// Output: 0
// Explanation:
// No cars will collide with each other. Thus, the total number of collisions that will happen on the road is 0.
  auto directions = "LLRR";
  auto output = CountCollisions(directions);
  ASSERT_EQ(output, 0);
}

}  // namespace problem
