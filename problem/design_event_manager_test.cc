#include "problem/design_event_manager.h"

#include "gtest/gtest.h"

namespace problem {

class EventManagerTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  EventManagerTest() {
    // You can do set-up work for each test here.
  }

  ~EventManagerTest() override {
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
TEST_F(EventManagerTest, case1) {
  //  Input:
  // ["EventManager", "pollHighest", "updatePriority", "pollHighest", "pollHighest"]
  // [[[[5, 7], [2, 7], [9, 4]]], [], [9, 7], [], []]

  // Output:
  // [null, 2, null, 5, 9]

  // Explanation

  // EventManager eventManager = new EventManager([[5,7], [2,7], [9,4]]); // Initializes the manager with three events
  // eventManager.pollHighest(); // both events 5 and 2 have priority 7, so return the smaller id 2
  // eventManager.updatePriority(9, 7); // event 9 now has priority 7
  // eventManager.pollHighest(); // remaining highest priority events are 5 and 9, return 5
  // eventManager.pollHighest(); // return 9

  /**
   * Your EventManager object will be instantiated and called as such:
   * EventManager* obj = new EventManager(events);
   * obj->updatePriority(eventId,newPriority);
   * int param_2 = obj->pollHighest();
   */
  std::vector<std::vector<int>> data{{5, 7}, {2, 7}, {9, 4}};
  EventManager eventManager(data);
  ASSERT_EQ(eventManager.pollHighest(), 2);
  eventManager.updatePriority(9, 7);
  ASSERT_EQ(eventManager.pollHighest(), 5);
  ASSERT_EQ(eventManager.pollHighest(), 9);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(EventManagerTest, case2) {
  // Input:
  // ["EventManager", "pollHighest", "pollHighest", "pollHighest"]
  // [[[[4, 1], [7, 2]]], [], [], []]

  // Output:
  // [null, 7, 4, -1]

  // Explanation

  // EventManager eventManager = new EventManager([[4,1], [7,2]]); // Initializes the manager with two events
  // eventManager.pollHighest(); // return 7
  // eventManager.pollHighest(); // return 4
  // eventManager.pollHighest(); // no events remain, return -1

  std::vector<std::vector<int>> data{{4, 1}, {7, 2}};
  EventManager eventManager(data);
  ASSERT_EQ(eventManager.pollHighest(), 7);
  ASSERT_EQ(eventManager.pollHighest(), 4);
  ASSERT_EQ(eventManager.pollHighest(), -1);
}

}  // namespace problem
