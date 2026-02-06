#ifndef NEAREST_EXIT_IN_MAZE_H
#define NEAREST_EXIT_IN_MAZE_H

#include <queue>
#include <vector>

namespace problem {

// You are given an m x n matrix maze (0-indexed) with empty cells (represented
// as '.') and walls (represented as '+'). You are also given the entrance of
// the maze, where entrance = [entrancerow, entrancecol] denotes the row and
// column of the cell you are initially standing at.

// In one step, you can move one cell up, down, left, or right. You cannot step
// into a cell with a wall, and you cannot step outside the maze. Your goal is
// to find the nearest exit from the entrance. An exit is defined as an empty
// cell that is at the border of the maze. The entrance does not count as an
// exit.

// Return the number of steps in the shortest path from the entrance to the
// nearest exit, or -1 if no such path exists.

bool isBorder(int m, int n, int i, int j) { return i == 0 || i == m - 1 || j == 0 || j == n - 1; }

bool isValid(int m, int n, int i, int j) { return i >= 0 && i < m && j >= 0 && j < n; }

int NearestExit(std::vector<std::vector<char>>& maze, std::vector<int>& entrance) {
  int rows[4]{0, 0, 1, -1};
  int cols[4]{1, -1, 0, 0};
  int m = maze.size();
  int n = maze[0].size();

  if (isBorder(m, n, entrance[0], entrance[1])) {
    maze[entrance[0]][entrance[1]] = '+';
  }

  int output = 0;
  std::queue<std::pair<int, int>> q;
  q.push({entrance[0], entrance[1]});
  while (!q.empty()) {
    int size = q.size();
    for (int i = 0; i < size; ++i) {
      auto top = q.front();
      q.pop();

      int x = top.first;
      int y = top.second;
      if (maze[x][y] != '+' && isBorder(m, n, x, y)) {
        return output;
      }

      for (int k = 0; k < 4; ++k) {
        int r = x + rows[k];
        int c = y + cols[k];
        if (isValid(m, n, r, c) && maze[r][c] == '.') {
          q.push({r, c});
          maze[r][c] = 'v';
        }
      }
    }
    output++;
  }
  return -1;
}

}  // namespace problem

#endif