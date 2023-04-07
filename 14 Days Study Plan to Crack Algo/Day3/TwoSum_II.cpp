#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// C1
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int diff = target - nums[i];
        if (mp.find(diff) == mp.end())
            mp[nums[i]] = i;
        else
            return {mp[diff], i};
    }
    return {-1, -1};
}

// C2
vector<int> twoSum2(vector<int> &numbers, int target)
{
    int l = 0, r = numbers.size() - 1;
    while (l <= r)
    {
        int sum = numbers[l] + numbers[r];
        if (sum == target)
        {
            break;
        }
        else if (sum > target)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    return {l + 1, r + 1};
}

int main()
{
    vector<int> input = {2, 7, 11, 15}, output = {1, 2};
    int target = 9;
    vector<int> output2 = twoSum(input, target);
    for (int x : output2)
    {
        cout << x << " ";
    }

    cout << endl;

    vector<int> output3 = twoSum2(input, target);
    for (int x : output3)
    {
        cout << x << " ";
    }
}