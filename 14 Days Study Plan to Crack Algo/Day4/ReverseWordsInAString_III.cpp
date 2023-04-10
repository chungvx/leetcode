#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

string reverseWords(string s)
{
    int l = 0;
    for (int r = 0; r <= s.size(); r++)
    {
        if (r == s.size() || s[r] == ' ')
        {
            reverse(s.begin() + l, s.begin() + r);
            l = r + 1;
        }
    }
    return s;
}

int main()
{
    string s = "Let's take LeetCode contest";
    string output = "s'teL ekat edoCteeL tsetnoc";
    string output2 = reverseWords(s);
    cout << output2;
}