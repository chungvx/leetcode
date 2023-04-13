#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool checkInclusion(string s1, string s2)
{
    int s1Len = s1.size(), s2Len = s2.size();
    if (s1Len > s2Len)
        return false;
    vector<int> s1Arr(26, 0), s2Arr(26, 0);
    for (int i = 0; i < s1Len; i++)
    {
        s1Arr[s1[i] - 'a']++;
        s2Arr[s2[i] - 'a']++;
    }
    if (s1Arr == s2Arr)
        return true;
    for (int i = s1Len; i < s2Len; i++)
    {
        s2Arr[s2[i] - 'a']++;
        s2Arr[s2[i - s1Len] - 'a']--;
        if (s1Arr == s2Arr)
            return true;
    }
    return false;
}

int main()
{
    string s1 = "ab", s2 = "eidbaoo";
    cout << checkInclusion(s1, s2);
}