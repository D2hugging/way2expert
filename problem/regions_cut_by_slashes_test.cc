#include "problem/regions_cut_by_slashes.h"

#include "gtest/gtest.h"

namespace problem {

class RegionsBySlashesTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  RegionsBySlashesTest() {
    // You can do set-up work for each test here.
  }

  ~RegionsBySlashesTest() override {
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
TEST_F(RegionsBySlashesTest, case1) {
  std::vector<std::string> data{{" /"}, {"/ "}};
  auto output = RegionsBySlashes(data);
  ASSERT_EQ(output, 2);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(RegionsBySlashesTest, case2) {
  std::vector<std::string> data{{" /"}, {"  "}};
  auto output = RegionsBySlashes(data);
  ASSERT_EQ(output, 1);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(RegionsBySlashesTest, case3) {
  std::vector<std::string> data{{"/\\"}, {"\\/"}};
  auto output = RegionsBySlashes(data);
  ASSERT_EQ(output, 5);
}

}  // namespace problem
