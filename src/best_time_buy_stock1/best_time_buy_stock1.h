#ifndef BEST_TIME_BUY_STOCK1_H_
#define BEST_TIME_BUY_STOCK1_H_

#include <algorithm>
#include <vector>

namespace foo {

// You are given an array prices where prices[i] is the price of a given stock
// on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock
// and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you
// cannot achieve any profit, return 0.

int MaxProfit1(std::vector<int>& prices) {
  int min_ele = prices[0];
  int max_profit = 0;
  for (int i = 1; i < prices.size(); ++i) {
    max_profit = std::max(max_profit, prices[i] - min_ele);
    if (prices[i] < min_ele) {
      min_ele = prices[i];
    }
  }
  return max_profit;
}

}  // namespace foo

#endif