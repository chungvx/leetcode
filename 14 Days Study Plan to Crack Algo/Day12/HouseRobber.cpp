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
    int solve(vector<int> nums, int index, vector<int> &dp)
    {
        if (index >= nums.size())
            return 0;
        if (dp[index] != -1)
            return dp[index];
        int left = solve(nums, index + 2, dp) + nums[index];
        int right = solve(nums, index + 1, dp);
        dp[index]= max(left, right);
        return dp[index];
    }

    int rob(vector<int> &nums)
    {
        vector<int> dp(nums.size() + 1, -1);
        return solve(nums, 0, dp);
    }
};

int main()
{
}