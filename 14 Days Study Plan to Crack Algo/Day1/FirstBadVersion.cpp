#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;

bool isBadVersion(int n)
{
    // Tự định nghĩa
    return false;
}

int firstBadVersion(int n)
{
    int l = 0, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (isBadVersion(mid))
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}

int main()
{
    cout << firstBadVersion(10);
}