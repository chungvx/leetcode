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
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n)
        {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};

int main()
{
}