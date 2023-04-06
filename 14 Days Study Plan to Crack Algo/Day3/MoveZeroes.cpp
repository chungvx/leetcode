#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// C1
void moveZeroes(vector<int> &nums)
{
    int l = nums.size();
    if (l == 0 || l == 1)
        return;
    int i = 0, j = 1;
    while (i < j && j < l)
    {
        if (nums[i] == 0 && nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
            j++;
        }
        else if (nums[i] == 0 && nums[j] == 0)
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    return;
}

// C2
void moveZeroes2(vector<int> &nums)
{
    int l = nums.size();
    if (l == 0 || l == 1)
        return;
    int non_zero = 0;
    for(int i = 0; i<l;i++){
        if (nums[i] != 0){
            swap(nums[non_zero], nums[i]);
            non_zero ++;
        }
    }
}

int main()
{
    vector<int> input = {0, 1, 0, 3, 12};
    vector<int> output = {1, 3, 12, 0, 0};
    moveZeroes(input);
    for (int x : input)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> input2 = {0, 1, 0, 3, 12};
    moveZeroes(input2);
    for (int x : input2)
    {
        cout << x << " ";
    }
}