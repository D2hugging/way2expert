#ifndef PASCAL_TRIANGLE_H_
#define PASCAL_TRIANGLE_H_

#include <vector>

namespace foo {

// Given an integer numRows, return the first numRows of Pascal's triangle.

std::vector<std::vector<int>> GeneratePascalTriangle(int numRows) {
        std::vector<std::vector<int>> ans;
        for (auto i = 0; i < numRows; ++i) {
            std::vector<int> temp(i+1, 1);
            ans.push_back(temp);
            for (auto j = 1; j < i; ++j) {
                ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
            }
            
        }
        return ans;
    }

}  // namespace foo

#endif