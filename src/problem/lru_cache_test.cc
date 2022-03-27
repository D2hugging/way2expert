#include "src/problem/lru_cache.h"

#include <string>

#include "gtest/gtest.h"

namespace problem {

class LRUCacheTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  LRUCacheTest() {
    // You can do set-up work for each test here.
  }

  ~LRUCacheTest() override {
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
TEST_F(LRUCacheTest, case1) {
  LRUCache<int, std::string> lru(3);
  lru.put(1, "one");
  lru.put(2, "two");
  lru.put(3, "three");
  lru.put(4, "four");
  std::string output;
  auto got = lru.get(1, output);

  EXPECT_FALSE(got);
  got = lru.get(2, output);
  EXPECT_TRUE(got);

  lru.put(5, "five");
  got = lru.get(3, output);
  EXPECT_FALSE(got);
}

}  // namespace problem
