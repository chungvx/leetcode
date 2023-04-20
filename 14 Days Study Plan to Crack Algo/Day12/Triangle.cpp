#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int solve(vector<vector<int>> triangle, int row, int col, int n, vector<vector<int>> &dp)
    {
        if (row == n || col > triangle[row].size())
            return 0;
        if (dp[row][col] != -1)
            return dp[row][col];
        int down = solve(triangle, row + 1, col, n, dp);
        int diag = solve(triangle, row + 1, col + 1, n, dp);
        dp[row][col] = min(down, diag) + triangle[row][col];
        return dp[row][col];
    }

    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(triangle, 0, 0, n, dp);
    }
};

int main()
{
}