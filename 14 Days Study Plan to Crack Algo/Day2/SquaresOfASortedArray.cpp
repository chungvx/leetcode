#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    vector<int> res;
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        if (abs(nums[l]) > abs(nums[r]))
        {
            res.push_back(nums[l] * nums[l]);
            l++;
        }
        else
        {
            res.push_back(nums[r] * nums[r]);
            r--;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    vector<int> input = {-4, -1, 0, 3, 10};
    vector<int> output = {0, 1, 9, 16, 100};
    vector<int> res = sortedSquares(input);
    for (int x : res)
    {
        cout << x << " ";
    }
    return 0;
}