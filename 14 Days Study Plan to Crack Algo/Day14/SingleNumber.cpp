#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            nums[i + 1] = nums[i] ^ nums[i + 1];
        }
        return nums[n-1];
    }
};

int main()
{
}