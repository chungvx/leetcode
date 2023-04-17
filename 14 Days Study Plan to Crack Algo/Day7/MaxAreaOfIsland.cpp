#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

void dfs(int i, int j, int n, int m, int &area, vector<vector<int>> &grid)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return;
    }
    if (grid[i][j] != 1)
    {
        return;
    }
    area++;
    grid[i][j] = 0; // set current = 0 to not loop in this
    dfs(i + 1, j, n, m, area, grid);
    dfs(i - 1, j, n, m, area, grid);
    dfs(i, j + 1, n, m, area, grid);
    dfs(i, j - 1, n, m, area, grid);
}

int maxAreaOfIsland(vector<vector<int>> &grid)
{
    int n = grid.size(), m = grid[0].size();
    int max_area = 0, current_area = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
            {
                dfs(i, j, n, m, current_area, grid);
                max_area = max(max_area, current_area);
                current_area = 0;
            }
        }
    }
    return max_area;
}

int main()
{
}