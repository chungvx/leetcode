#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <utility>

using namespace std;
class Solution
{
public:
    queue<pair<int, int>> q;
    void bfs(int r, int c, vector<vector<int>> &grid, int &fresh, int m, int n)
    {
        if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == 1)
        {
            fresh--;
            grid[r][c] = 2;
            q.push({r, c});
        }
    }

    int minute = -1;
    int orangesRotting(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size(), fresh = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({i, j});
                }
                if (grid[i][j] == 1)
                {
                    fresh++;
                }
            }
        }

        while (!q.empty())
        {
            int sz = q.size();
            while (sz--)
            {
                pair<int, int> p = q.front();
                int first = p.first, second = p.second;
                q.pop();
                bfs(first + 1, second, grid, fresh, m, n);
                bfs(first - 1, second, grid, fresh, m, n);
                bfs(first, second + 1, grid, fresh, m, n);
                bfs(first, second - 1, grid, fresh, m, n);
            }
            minute++;
        }
        if (fresh > 0)
            return -1;
        if (minute == -1)
            return 0;
        return minute;
    }
};

int main()
{
}