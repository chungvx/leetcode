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
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t x = 0, count = 32;
        while (count)
        {
            x += n & 1;
            n >>= 1;
            if (--count)
                x <<= 1;
        }
        return x;
    }
};

int main()
{
}