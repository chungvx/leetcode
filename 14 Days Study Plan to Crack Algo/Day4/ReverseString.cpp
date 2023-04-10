#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

void reverseString(vector<char> &s)
{
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        swap(s[l], s[r]);
        l++;
        r--;
    }
}

int main()
{
    vector<char> input = {'H', 'a', 'n', 'n', 'a', 'h'};
    vector<char> output = {'h', 'a', 'n', 'n', 'a', 'H'};
    reverseString(input);
    for (char x : input)
    {
        cout << x << ", ";
    }
}