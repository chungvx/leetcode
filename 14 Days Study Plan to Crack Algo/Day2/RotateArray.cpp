#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    vector<int> temp(k);
    for (int i = 0; i < k; i++)
    {
        temp[i] = nums[n - k + i];
    }
    for (int i = n - 1; i >= k; i--)
    {
        nums[i] = nums[i - k];
    }
    for (int i = 0; i < k; i++)
    {
        nums[i] = temp[i];
    }
}

int main()
{
    vector<int> input = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    vector<int> output = {5, 6, 7, 1, 2, 3, 4};
    rotate(input, k);
    for (int x : input)
    {
        cout << x << " ";
    }
    return 0;
}