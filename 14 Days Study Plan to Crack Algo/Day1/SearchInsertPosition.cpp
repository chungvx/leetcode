#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;
    if (target > nums[r])
        return r + 1;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (target <= nums[mid])
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}

int main()
{
    vector<int> test = {1, 3, 5, 6};
    // test1
    int target1 = 5, output1 = 2;

    // test2
    int target2 = 2, output2 = 1;

    // test3
    int target3 = 7, output3 = 4;

    cout << "test1: " << searchInsert(test, target1) << endl;
    cout << "test2: " << searchInsert(test, target2) << endl;
    cout << "test3: " << searchInsert(test, target3) << endl;
}