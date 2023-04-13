#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> map;
    int len = 0, maxL = 0, left = 0;
    for (int i = 0; i < s.size(); i++)
    {
        map[s[i]]++;
        len++;
        while (map[s[i]] > 1)
        {
            map[s[left++]]--;
            len--;
        }
        maxL = max(maxL, len);
    }
    return maxL;
}

int main()
{
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
}