#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    void solve(string temp, vector<string> &output, string s, int current)
    {
        if (current == s.size())
        {
            output.push_back(temp);
            return;
        }
        if (isdigit(s[current]))
        {
            temp.push_back(s[current]);
            solve(temp, output, s, current + 1);
        }
        else
        {
            string s1 = temp;
            s1.push_back(tolower(s[current]));
            solve(s1, output, s, current + 1);

            string s2 = temp;
            s2.push_back(toupper(s[current]));
            solve(s2, output, s, current + 1);
        }
    }
    vector<string> letterCasePermutation(string s)
    {
        vector<string> output;
        string temp;
        solve(temp, output, s, 0);
        return output;
    }
};
int main()
{
}