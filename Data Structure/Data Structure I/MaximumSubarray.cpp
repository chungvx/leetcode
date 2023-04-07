#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int curSum = 0, maxSum = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (curSum < 0)
            curSum = 0;
        curSum += nums[i];
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}

int main()
{
    vector<int> input = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int output = 6;
    int output2 = maxSubArray(input);
    cout << output2;
}