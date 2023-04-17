#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

void dfs(vector<vector<int>> &image, int i, int j, int currentColor, int newColor, int n, int m)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return;
    }
    if (image[i][j] == newColor)
    {
        return;
    }
    if (image[i][j] == currentColor)
    {
        image[i][j] = newColor;
        dfs(image, i + 1, j, currentColor, newColor, n, m);
        dfs(image, i - 1, j, currentColor, newColor, n, m);
        dfs(image, i, j + 1, currentColor, newColor, n, m);
        dfs(image, i, j - 1, currentColor, newColor, n, m);
    }
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    int n = image.size(), m = image[0].size();
    int currentColor = image[sr][sc];
    dfs(image, sr, sc, currentColor, color, n, m);
    return image;
}

int main()
{
}