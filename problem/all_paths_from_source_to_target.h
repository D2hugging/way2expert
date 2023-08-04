#ifndef _ALL_PATHS_FROM_SOURCE_TO_TARGET_H
#define _ALL_PATHS_FROM_SOURCE_TO_TARGET_H

#include <vector>

namespace problem {

// Given a directed acyclic graph (DAG) of n nodes labeled from 0 to n - 1, find
// all possible paths from node 0 to node n - 1 and return them in any order.

// The graph is given as follows: graph[i] is a list of all nodes you can visit
// from node i (i.e., there is a directed edge from node i to node graph[i][j]).

// Constraints:

// n == graph.length
// 2 <= n <= 15
// 0 <= graph[i][j] < n
// graph[i][j] != i (i.e., there will be no self-loops).
// All the elements of graph[i] are unique.
// The input graph is guaranteed to be a DAG.

class SolutionAllPathsSourceTarget {
 public:
  void dfs(const std::vector<std::vector<int>>& graph, int cur,
           std::vector<int>& path, std::vector<std::vector<int>>& output) {
    path.push_back(cur);
    if (cur == graph.size() - 1) {
      output.push_back(path);
    } else {
      for (auto n : graph[cur]) {
        dfs(graph, n, path, output);
      }
    }
    path.pop_back();
  }

  std::vector<std::vector<int>> allPathsSourceTarget(
      std::vector<std::vector<int>>& graph) {
    std::vector<std::vector<int>> output;
    std::vector<int> path;

    dfs(graph, 0, path, output);
    return output;
  }
};
}  // namespace problem

#endif