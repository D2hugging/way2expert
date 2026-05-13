#include "problem/design_auction_system.h"

#include "gtest/gtest.h"

namespace problem {

class AuctionSystemTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  AuctionSystemTest() {
    // You can do set-up work for each test here.
  }

  ~AuctionSystemTest() override {
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
TEST_F(AuctionSystemTest, case1) {
  // Input:
  // ["AuctionSystem", "addBid", "addBid", "getHighestBidder", "updateBid", "getHighestBidder", "removeBid",
  // "getHighestBidder", "getHighestBidder"]
  // [[], [1, 7, 5], [2, 7, 6], [7], [1, 7, 8], [7], [2, 7], [7], [3]]

  // Output:
  // [null, null, null, 2, null, 1, null, 1, -1]

  // Explanation

  // AuctionSystem auctionSystem = new AuctionSystem(); // Initialize the Auction system
  // auctionSystem.addBid(1, 7, 5); // User 1 bids 5 on item 7
  // auctionSystem.addBid(2, 7, 6); // User 2 bids 6 on item 7
  // auctionSystem.getHighestBidder(7); // return 2 as User 2 has the highest bid
  // auctionSystem.updateBid(1, 7, 8); // User 1 updates bid to 8 on item 7
  // auctionSystem.getHighestBidder(7); // return 1 as User 1 now has the highest bid
  // auctionSystem.removeBid(2, 7); // Remove User 2's bid on item 7
  // auctionSystem.getHighestBidder(7); // return 1 as User 1 is the current highest bidder
  // auctionSystem.getHighestBidder(3); // return -1 as no bids exist for item 3
  AuctionSystem auctionSystem;
  auctionSystem.addBid(1, 7, 5);
  auctionSystem.addBid(2, 7, 6);
  ASSERT_EQ(auctionSystem.getHighestBidder(7), 2);
  auctionSystem.updateBid(1, 7, 8);
  ASSERT_EQ(auctionSystem.getHighestBidder(7), 1);
  auctionSystem.removeBid(2, 7);
  ASSERT_EQ(auctionSystem.getHighestBidder(7), 1);
  ASSERT_EQ(auctionSystem.getHighestBidder(3), -1);
}

}  // namespace problem
