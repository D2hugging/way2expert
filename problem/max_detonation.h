#ifndef _MAX_DETONATION_H
#define _MAX_DETONATION_H

#include <cmath>
#include <vector>

namespace {
// You are given a list of bombs. The range of a bomb is defined as the area
// where its effect can be felt. This area is in the shape of a circle with the
// center as the location of the bomb.

// The bombs are represented by a 0-indexed 2D integer array bombs where
// bombs[i] = [xi, yi, ri]. xi and yi denote the X-coordinate and Y-coordinate
// of the location of the ith bomb, whereas ri denotes the radius of its range.

// You may choose to detonate a single bomb. When a bomb is detonated, it will
// detonate all bombs that lie in its range. These bombs will further detonate
// the bombs that lie in their ranges.

// Given the list of bombs, return the maximum number of bombs that can be
// detonated if you are allowed to detonate only one bomb.

// Constraints:

// 1 <= bombs.length <= 100
// bombs[i].length == 3
// 1 <= xi, yi, ri <= 105

int DFSMaximumDetonation(std::vector<int> adj[], int node,
                         std::vector<bool>& visited) {
  visited[node] = true;
  int cnt = 1;
  for (auto n : adj[node]) {
    if (!visited[n]) {
      cnt += DFSMaximumDetonation(adj, n, visited);
    }
  }
  return cnt;
}

int MaximumDetonation(std::vector<std::vector<int>>& bombs) {
  int n = bombs.size();
  std::vector<int> adj[n];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == j) continue;
      int x = abs(bombs[i][0] - bombs[j][0]);
      int y = abs(bombs[i][true] - bombs[j][true]);
      if (pow(x, 2) + pow(y, 2) <= pow(bombs[i][2], 2)) {
        adj[i].push_back(j);
      }
    }
  }
  int output = 0;
  for (int i = 0; i < n; ++i) {
    std::vector<bool> visited(n, false);
    output = std::max(output, DFSMaximumDetonation(adj, i, visited));
  }
  return output;
}

}  // namespace

#endif