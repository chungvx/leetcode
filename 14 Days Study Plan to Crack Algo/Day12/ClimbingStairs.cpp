#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

// dãy pibonaci
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1 || n == 2 || n == 3)
            return n;
        int prev = 1, prev2 = 1, temp;
        for (int i = 1; i < n; i++)
        {
            temp = prev + prev2;
            prev2 = prev;
            prev = temp;
        }
        return prev;
    }
};

int main()
{
}