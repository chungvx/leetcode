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
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;
        return ceil(log2(n)) == floor(log2(n));
    }
};

int main()
{
}