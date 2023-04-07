#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

// C1
bool containsDuplicate(vector<int> &nums)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find(nums[i]) == map.end())
        {
            map[nums[i]] = i;
        }
        else
        {
            return true;
        }
    }
    return false;
}

// C2
bool containsDuplicate2(vector<int> &nums)
{
    return nums.size() > set<int>(nums.begin(), nums.end()).size();
}

int main()
{
}