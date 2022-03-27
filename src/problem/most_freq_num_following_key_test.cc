#include "src/problem/most_freq_num_following_key.h"

#include "gtest/gtest.h"

namespace problem {

class MostFrequentFollowingKeyTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MostFrequentFollowingKeyTest() {
    // You can do set-up work for each test here.
  }

  ~MostFrequentFollowingKeyTest() override {
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
TEST_F(MostFrequentFollowingKeyTest, case1) {
  std::vector<int> data{1, 100, 200, 1, 100};
  int key = 1;
  auto output = MostFrequentFollowingKey(data, key);
  EXPECT_EQ(output, 100);
}

TEST_F(MostFrequentFollowingKeyTest, case2) {
  std::vector<int> data{2, 2, 2, 2, 3};
  int key = 2;
  auto output = MostFrequentFollowingKey(data, key);
  EXPECT_EQ(output, 2);
}

}  // namespace problem
