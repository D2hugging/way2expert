#include "src/problem/subsets.h"

#include "gtest/gtest.h"

namespace problem {

void print_arrays(std::vector<std::vector<int>> arrays) {
  for (auto& array : arrays) {
    for (auto& x : array) {
      std::cout << x << ' ';
    }
    std::cout << '\n';
  }
}

class SubsetsTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SubsetsTest() {
    // You can do set-up work for each test here.
  }

  ~SubsetsTest() override {
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
TEST_F(SubsetsTest, case1) {
  // [1,2,3]
  std::vector<int> data{1, 2, 3};
  // {{},{1},{1,2},{1,2,3},{1,3},{2},{2,3},{3}}
  auto output1 = SubsetsBacktracking(data);
//   print_arrays(output1);

  EXPECT_EQ(output1.size(), 8);
  EXPECT_EQ(output1[0].size(), 0);
  // {{},{1},{2},{1,2},{3},{1,3},{2,3},{1,2,3}}
  auto output2 = Subsets(data);
//   print_arrays(output2);
  EXPECT_EQ(output2.size(), 8);
  EXPECT_EQ(output2[0].size(), 0);
  EXPECT_EQ(output2[7].size(), 3);
}

}  // namespace problem
