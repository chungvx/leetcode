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
    void combine(int n, int k, vector<vector<int>> &output, vector<int> &temp, int start)
    {
        if (temp.size() == k)
        {
            output.push_back(temp);
            return;
        }
        for (int i = start; i <= n; i++)
        {
            temp.push_back(i);
            combine(n, k, output, temp, i + 1);
        }
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> output;
        vector<int> temp;
        combine(n, k, output, temp, 1);
        return output;
    }
};

int main()
{
}