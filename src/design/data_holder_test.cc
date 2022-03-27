#include "src/design/data_holder.h"

#include "gtest/gtest.h"

namespace design {

class DataHolderTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  DataHolderTest() {
    // You can do set-up work for each test here.
  }

  ~DataHolderTest() override {
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
TEST_F(DataHolderTest, insert) {
  DataHolder<> holder;
  std::string key_vec_int = "vec_int";
  auto vec_int = holder.insert<std::vector<int>>(key_vec_int, new std::vector<int>{1,2,3});
  ASSERT_EQ(vec_int->size(), 3);

  std::string key_vec_float = "vec_float";
  auto vec_float = holder.insert<std::vector<float>>(key_vec_float, new std::vector<float>{1.1,2.2});
  ASSERT_EQ(vec_float->size(), 2);
  
  std::string key_map_s2i = "s2i";
  auto s2i = holder.insert<std::unordered_map<std::string, int>>(key_map_s2i, new std::unordered_map<std::string, int>{{"one", 1}});
  ASSERT_EQ(s2i->size(), 1);

}

// Tests that the Foo::Bar() method does Abc.
TEST_F(DataHolderTest, find) {
  DataHolder<> holder;
  std::string key_map_s2i = "s2i";
  auto s2i = holder.insert<std::unordered_map<std::string, int>>(key_map_s2i, new std::unordered_map<std::string, int>{{"one", 1}});
  ASSERT_EQ(s2i->size(), 1);

  auto data = holder.find<std::unordered_map<std::string, int>>(key_map_s2i);
  auto cnt = data->count("one");
  ASSERT_TRUE(cnt > 0);
  cnt = data->count("two");
  ASSERT_FALSE(cnt > 0);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(DataHolderTest, erase) {
  DataHolder<> holder;
  std::string key_map_s2i = "s2i";
  auto s2i = holder.insert<std::unordered_map<std::string, int>>(key_map_s2i, new std::unordered_map<std::string, int>{{"one", 1}});
  ASSERT_EQ(s2i->size(), 1);

  auto data = holder.find<std::unordered_map<std::string, int>>(key_map_s2i);
  auto cnt = data->count("one");
  ASSERT_TRUE(cnt > 0);
  
  data->erase("one");
  cnt = data->count("one");
  ASSERT_EQ(cnt, 0);
}

}  // namespace problem
