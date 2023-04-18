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
    void permute2(int start, vector<int> &nums, vector<vector<int>> &output)
    {
        if (start == nums.size())
        {
            output.emplace_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); i++)
        {
            swap(nums[start], nums[i]);
            permute2(start + 1, nums, output);
            swap(nums[start], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> output;
        permute2(0, nums, output);
        return output;
    }
};


int main()
{
}